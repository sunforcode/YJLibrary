// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTModel.h"
#import "PTApiNewageService+Signature.h"
#import "PTApiNewageServicePrivate.h"
void PTLog(NSString *format, ...) {
#ifdef DEBUG
    if (![PTApiNewageService shared].config.debugLogEnabled) {
        return;
    }
    va_list argptr;
    va_start(argptr, format);
    NSLogv(format, argptr);
    va_end(argptr);
#endif
}
#define kAPIErrorDomain @"com.xiachufang.api.error"
#pragma mark - PTApiNewageConfig
@implementation PTApiNewageConfig
+ (instancetype)defaultConfig {
    PTApiNewageConfig *conf = [[PTApiNewageConfig alloc] init];
    conf.debugLogEnabled = NO;
    conf.requestPriority = PTNewageRequestPriorityDefault;
    conf.baseUrl = @"https://api.xiachufang.com/v2";
    conf.requestTimeoutInterval = 20;
    return conf;
}
- (void)mergeFromOtherConfig:(PTApiNewageConfig *)otherConfig {
    NSArray *properties = [self getProperties];
    for (NSString *key in properties) {
        id selfValue = [self valueForKey:key];
        id otherValue = [otherConfig valueForKey:key];
        [self setValue:selfValue ?: otherValue forKey:key];
    }
}
@end
#pragma mark - PTApiRequest
@implementation PTApiRequest
- (instancetype)initWithName:(nonnull NSString *)name
                  requestUrl:(nonnull NSString *)requestUrl
                commonParams:(nonnull PTCommonRequestParameterMessage *)commonParams
                headerParams:(nonnull PTHeaderMessage *)headerParams
                   bizParams:(nonnull id)bizParams
                      config:(nonnull PTApiNewageConfig *)config {
    self = [super init];
    if (self) {
        _requestName = name;
        _requestUrl = requestUrl;
        _commonParams = commonParams;
        _headerParams = headerParams;
        _bizParams = bizParams;
        _config = config;
    }
    return self;
}
- (NSString *)buildFullRequestUrl:(NSString *)requestUrl
                          BaseUrl:(NSString *)baseUrl {
    NSURL *url = [NSURL URLWithString:baseUrl];
    if (baseUrl.length > 0 && ![baseUrl hasSuffix:@"/"]) {
        url = [url URLByAppendingPathComponent:@""];
    }
    return [NSURL URLWithString:requestUrl relativeToURL:url].absoluteString;
}
- (NSString *)fullURL {
    return [self buildFullRequestUrl:self.requestUrl BaseUrl:self.config.baseUrl];
}
@end
#pragma mark - PTApiResponse
@implementation PTApiResponse
- (instancetype)initWithRequest:(nonnull PTApiRequest *)request
                      bizResult:(nullable PTModel *)bizResult
                   commonResult:(nonnull PTCommonResponseParameterMessage *)commonResult {
    self = [super init];
    if (self) {
        _request = request;
        _bizResult = bizResult;
        _commonResult = commonResult;
    }
    return self;
}
- (NSString *)requestName {
    return _request.requestName;
}
- (NSString *)requestUrl {
    return _request.requestUrl;
}
- (NSString *)fullUrl {
    return [_request fullURL];
}
- (id)bizParams {
    return _request.bizParams;
}
- (PTCommonRequestParameterMessage *)commonParams{
    return _request.commonParams;
}
- (PTApiNewageConfig *)config {
    return _request.config;
}
@end
#pragma mark - PTApiNewageService
@implementation PTApiNewageService {
    AFHTTPSessionManager *_manager;
    NSPointerArray *_delegatesArray;
}
+ (PTApiNewageService *)shared {
    static id sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
      sharedInstance = [[self alloc] init];
    });
    return sharedInstance;
}
- (instancetype)init {
    self = [super init];
    if (self) {
        _config = [PTApiNewageConfig defaultConfig];
        NSURLSessionConfiguration *sessionConfiguration =
            [NSURLSessionConfiguration defaultSessionConfiguration];
        _manager = [[AFHTTPSessionManager alloc]
            initWithSessionConfiguration:sessionConfiguration];
        _manager.completionQueue = dispatch_queue_create("pt.api.xiachufang.completionQueue",
                                                         DISPATCH_QUEUE_CONCURRENT);
        _delegatesArray = [NSPointerArray weakObjectsPointerArray];
        NSMutableIndexSet *acceptStatusCodes = [[NSMutableIndexSet alloc] init];
        [acceptStatusCodes addIndex:200];
        [acceptStatusCodes addIndex:400];
        [acceptStatusCodes addIndex:422];
        AFJSONResponseSerializer *responseSerializer = [AFJSONResponseSerializer serializer];
        responseSerializer.acceptableStatusCodes = acceptStatusCodes;
        _manager.responseSerializer = responseSerializer;
    };
    return self;
}
- (PTApiNewageConfig *)copyConfig {
    PTApiNewageConfig *conf = [_config copy];
    return conf;
}
- (void)addDelegate:(id<PTApiNewageDelegate>)delegate {
    @synchronized(_delegatesArray) {
        if (![[_delegatesArray allObjects] containsObject:delegate]) {
            [_delegatesArray addPointer:(__bridge void * _Nullable)delegate];
        }
    }
}
- (nonnull RACSignal *)rac_StartWithParams:(nonnull PTModel *)params
                                requestUrl:(nonnull NSString *)requestUrl
                               resultClass:(nonnull Class)resultClass
                               requestName:(nonnull NSString *)requestName
                                 apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    if (!apiConfig) {
        apiConfig = [_config copy];
    } else {
        [apiConfig mergeFromOtherConfig:[_config copy]];
    }
    __weak typeof(self) weakSelf = self;
    return [RACSignal createSignal:^RACDisposable *_Nonnull(id<RACSubscriber> _Nonnull subscriber) {
      __block PTCommonRequestParameterMessage *commonParams = [[PTCommonRequestParameterMessage alloc] init];
      if (weakSelf.commonParamsBlock) {
          weakSelf.commonParamsBlock(commonParams);
      }
      NSAssert(![commonParams pt_modelIsEqual:[PTCommonRequestParameterMessage new]], @"必须设置 [PTApiNewageService shared].commonParamsBlock 的实现");
       /* 设置 Header */
      __block PTHeaderMessage *headerParams = [[PTHeaderMessage alloc] init];
      if (weakSelf.headerParamsBlock) {
          weakSelf.headerParamsBlock(headerParams);
      }
      NSAssert(![headerParams pt_modelIsEqual:[PTHeaderMessage new]], @"必须设置 [PTApiNewageService shared].headerParamsBlock 的实现");
      __block PTApiRequest *req = [[PTApiRequest alloc] initWithName:requestName requestUrl:requestUrl commonParams:commonParams headerParams:headerParams bizParams:params config:apiConfig];
      NSURLSessionTask *task = [weakSelf startWithRequest:req
          resultClass:resultClass
          success:^(PTApiResponse *resp) {
            [subscriber sendNext:resp.bizResult];
            [subscriber sendCompleted];
          }
          failure:^(NSError *ptError) {
            [subscriber sendError:ptError];
          }];
      return [RACDisposable disposableWithBlock:^{
        [task cancel];
      }];
    }];
}
- (nonnull NSURLSessionTask *)startWithRequest:(nonnull PTApiRequest *)ptReq
                                   resultClass:(nonnull Class)resultClass
                                       success:(nullable PTRequestCompletionSuccessBlock)successBlock
                                       failure:(nullable PTRequestCompletionErrorBlock)failureBlock {
   NSError *error = nil;
    NSURLRequest *request = [self makeRequestWithPTRequest:ptReq error:&error];
    if (error) {
        if (failureBlock) {
            failureBlock(error);
        }
        return nil;
    }
    __block NSMutableDictionary *context = [[NSMutableDictionary alloc] init];
    __weak typeof(self) weakSelf = self;
    NSURLSessionDataTask *dataTask = [_manager
        dataTaskWithRequest:request
             uploadProgress:nil
           downloadProgress:nil
          completionHandler:^(NSURLResponse *_Nonnull resp,
                              id _Nullable responseObject,
                              NSError *_Nullable error) {
            // 请求即将结束
            @synchronized(self->_delegatesArray) {
              for (id<PTApiNewageDelegate> delegate in self->_delegatesArray) {
                  if ([delegate respondsToSelector:@selector(requestWillStop:context:)]) {
                      [delegate requestWillStop:ptReq context:context];
                  }
              }
            }
            PTApiResponse *ptResp = nil;
            NSError *ptError = nil;
            [weakSelf handleWithResponse:resp responseObject:responseObject error:error ptRequest:ptReq resultClass:resultClass ptResponse:&ptResp ptError:&ptError];
            if (!ptError) {
                // 请求成功
                @synchronized(self->_delegatesArray) {
                  for (id<PTApiNewageDelegate> delegate in self->_delegatesArray) {
                      if ([delegate respondsToSelector:@selector(requestSuccessed:response:context:)]) {
                          [delegate requestSuccessed:ptReq response:ptResp context:context];
                      }
                  }
                }
                dispatch_async(ptReq.config.completionQueue ?: dispatch_get_main_queue(), ^{
                  if (successBlock) {
                      successBlock(ptResp);
                  }
                });
            } else {
                // 请求失败
                @synchronized(self->_delegatesArray) {
                  for (id<PTApiNewageDelegate> delegate in self->_delegatesArray) {
                      if ([delegate respondsToSelector:@selector(requestFailed:error:context:)]) {
                          [delegate requestFailed:ptReq error:ptError context:context];
                      }
                  }
                }
                dispatch_async(ptReq.config.completionQueue ?: dispatch_get_main_queue(), ^{
                  if (failureBlock) {
                      failureBlock(ptError);
                  }
                });
            }
            // 请求结束
            @synchronized(self->_delegatesArray) {
              for (id<PTApiNewageDelegate> delegate in self->_delegatesArray) {
                  if ([delegate respondsToSelector:@selector(requestDidStop:response:error:context:)]) {
                      [delegate requestDidStop:ptReq response:ptResp error:ptError context:context];
                  }
              }
            }
          }];
    // 设置请求优先级
    if ([dataTask respondsToSelector:@selector(priority)]) {
        switch (ptReq.config.requestPriority) {
            case PTNewageRequestPriorityHigh:
                dataTask.priority = NSURLSessionTaskPriorityHigh;
                break;
            case PTNewageRequestPriorityLow:
                dataTask.priority = NSURLSessionTaskPriorityLow;
                break;
            case PTNewageRequestPriorityDefault:
                /*!!fall through*/
            default:
                dataTask.priority = NSURLSessionTaskPriorityDefault;
                break;
        }
    }
    // 请求即将开始
    @synchronized(self->_delegatesArray) {
      for (id<PTApiNewageDelegate> delegate in self->_delegatesArray) {
          if ([delegate respondsToSelector:@selector(requestWillStart:context:)]) {
              [delegate requestWillStart:ptReq context:context];
          }
      }
    }
    [dataTask resume];
    return dataTask;
}
- (void)handleWithResponse:(NSURLResponse *_Nonnull)resp
            responseObject:(id _Nullable)responseObject
                     error:(NSError *_Nullable)error
                 ptRequest:(PTApiRequest *)ptReq
               resultClass:(Class)resultClass
                ptResponse:(PTApiResponse *_Nullable *)ptResp
                   ptError:(NSError * _Nullable __autoreleasing *)ptError {
    NSHTTPURLResponse *httpResp = (NSHTTPURLResponse *)resp;
    // 网络错误
    if (error) {
        if (ptError) {
            *ptError = [NSError errorWithDomain:kAPIErrorDomain code:error.code userInfo:error.userInfo];
        }
    } else if (httpResp.statusCode == 200) {
        NSAssert(resultClass, @"必须设置resultClass");
        PTModel *resultModel = [resultClass pt_modelWithJSON:responseObject];
        PTCommonResponseParameterMessage *commonModel = [PTCommonResponseParameterMessage pt_modelWithJSON:responseObject];
#if DEBUG
        // 返回数据不能解析为字典
        NSDictionary *resultDic = [NSDictionary pt_dictionaryWithJSON:responseObject];
        if ((!resultDic || resultDic == (id)kCFNull) || (![resultDic isKindOfClass:[NSDictionary class]])){
            PTLog(@"数据正确返回,但是解析出现错误.需要调整数据结构.抓包查看或者联系后台");
            if (ptError) {
                *ptError = [NSError errorWithDomain:kAPIErrorDomain code:NSIntegerMax userInfo:@{NSLocalizedDescriptionKey: @"数据序列化出错"}];
            }
            return;
        }
        // 返回数据不能正确解析
        if (!resultModel && [resultDic count]>0) {
            PTLog(@"数据正确返回,但是解析出现错误.需要调整数据结构.抓包查看或者联系后台");
            if (ptError) {
                *ptError = [NSError errorWithDomain:kAPIErrorDomain code:NSIntegerMax userInfo:@{NSLocalizedDescriptionKey: @"数据序列化出错"}];
            }
            return;
        }
#endif
        if (!resultModel) {
            resultModel = [resultClass new];
        }
        if (ptResp) {
            *ptResp = [[PTApiResponse alloc] initWithRequest:ptReq bizResult:resultModel commonResult:commonModel];
        }
    } else if (httpResp.statusCode == 400 || httpResp.statusCode == 422) {
        PTLog(@"业务报错 : %@", responseObject);
        PTErrorCodeMessage *errModel = [PTErrorCodeMessage pt_modelWithJSON:responseObject];
        if (ptError) {
            *ptError = [NSError errorWithDomain:kAPIErrorDomain code:errModel.code userInfo:@{NSLocalizedDescriptionKey: errModel.message}];
        }
    }else {
        if (ptError) {
            *ptError = [NSError errorWithDomain:kAPIErrorDomain code:NSIntegerMax userInfo:@{NSLocalizedDescriptionKey: [NSString stringWithFormat:@"UNKNOWN_ERROR Http.StatusCode: %ld", httpResp.statusCode]}];
        }
    }
}
- (NSURLRequest *)makeRequestWithPTRequest:(PTApiRequest *)ptReq
                                     error:(NSError *__autoreleasing *)error {
    PTModel *commonParams = ptReq.commonParams;
    PTModel *bizParams = ptReq.bizParams;
    NSString *url = [ptReq fullURL];
    NSMutableDictionary *parameters = [[NSMutableDictionary alloc] init];
    // 判断业务参数类型
    if ([bizParams isKindOfClass:PTModel.class]) {
        [parameters addEntriesFromDictionary:[bizParams pt_modelToJSONObject]];
    }
    // 判断公共参数类型
    if ([commonParams isKindOfClass:PTModel.class]) {
        [parameters addEntriesFromDictionary:[commonParams pt_modelToJSONObject]];
    }
    // 先序列化再算签名
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:parameters options:0 error:error];
    NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    NSAssert([self respondsToSelector:@selector(apiSignature:secret:)], @"没有分类执行apiSignature:secret:签名方法");
    NSString *signature = [self respondsToSelector:@selector(apiSignature:secret:)] ? [self apiSignature:jsonString secret:ptReq.config.apiSecret] : @"";
    ptReq.headerParams.sign = signature;
    NSMutableURLRequest *mutableRequest = [[AFJSONRequestSerializer serializer] requestWithMethod:@"POST"
                                                               URLString:url
                                                              parameters:parameters
                                                                   error:error];
    [mutableRequest setHTTPBody:[jsonString dataUsingEncoding:NSUTF8StringEncoding]];
    [mutableRequest setValue:@"application/json" forHTTPHeaderField:@"Content-Type"];
    [mutableRequest setValue:@"0.6.1" forHTTPHeaderField:@"X-Proto-Version"];
    NSDictionary *headerDictionary = [ptReq.headerParams pt_modelToJSONObject];
    [headerDictionary enumerateKeysAndObjectsUsingBlock:^(id  _Nonnull key, id  _Nonnull obj, BOOL * _Nonnull stop) {
        [mutableRequest setValue:[NSString stringWithFormat:@"%@", obj] forHTTPHeaderField:key];
    }];
    return mutableRequest;
}
@end
