// apic_version = 0.5.5
#import <Foundation/Foundation.h>
#if __has_include(<AFNetworking/AFNetworking.h>)
#import <AFNetworking/AFNetworking.h>
#else
#import "AFNetworking.h"
#endif
#if __has_include(<ReactiveObjC/ReactiveObjC.h>)
#import <ReactiveObjC/ReactiveObjC.h>
#else
#import "ReactiveObjC.h"
#endif
#import "PTCommonRequestParameterMessage.h"
#import "PTCommonResponseParameterMessage.h"
#import "PTErrorCodeMessage.h"
#import "PTHeaderMessage.h"
NS_ASSUME_NONNULL_BEGIN
FOUNDATION_EXPORT void PTLog(NSString *_Nonnull format, ...) NS_FORMAT_FUNCTION(1, 2);
#pragma mark - PTApiNewageConfig
typedef NS_ENUM(NSInteger, PTNewageRequestPriority) {
    PTNewageRequestPriorityLow = -4L,
    PTNewageRequestPriorityDefault = 0,
    PTNewageRequestPriorityHigh = 4,
};
@interface PTApiNewageConfig : PTModel
/**
 创建带有默认值的config,此默认值为初始默认值,非请求单例持有的config
 @return 返回带有默认值的config
 */
+ (instancetype)defaultConfig;
/**
 baseUrl
 */
@property (atomic, copy) NSString *baseUrl;
/**
 请求超时时间 默认60秒
 */
@property (atomic, assign) NSTimeInterval requestTimeoutInterval;
/**
 API Secret
 */
@property (atomic, copy) NSString *apiSecret;
/**
 请求优先级 默认:PTNewagePriorityDefault
 */
@property (atomic) PTNewageRequestPriority requestPriority;
/**
 是否打印日志 默认不打印
 */
@property (atomic) BOOL debugLogEnabled;
/**
 设置请求完成线程.数据处理完成后,会切换到业务端提供的completionQueue.如果没有则在主线程中返回
 */
@property (atomic, strong, nullable) dispatch_queue_t completionQueue;
/**
 以当前 config 为主, 合并另一个 cofig, 填当前 config, value 为空的 key
 @param otherConfig 需要合并的config
 */
- (void)mergeFromOtherConfig:(PTApiNewageConfig *)otherConfig;
@end
#pragma mark - PTApiRequest
@interface PTApiRequest : NSObject
/**
 请求方法名
 */
@property (nonatomic, strong, readonly, nonnull) NSString *requestName;
/**
 请求URL,非完整URL
 */
@property (nonatomic, strong, readonly, nonnull) NSString *requestUrl;
/**
 业务参数
 */
@property (nonatomic, strong, readonly, nonnull) id bizParams;
/**
 公共参数
 */
@property (nonatomic, strong, readonly, nonnull) PTCommonRequestParameterMessage *commonParams;
/**
 HTTPHeader
 */
@property (atomic, strong) PTHeaderMessage *headerParams;
/**
 请求参数配置
 */
@property (nonatomic, strong, readonly, nonnull) PTApiNewageConfig *config;
/**
 请求参数对象化
 @param name 请求名称
 @param requestUrl 请求URL
 @param commonParams 请求公共参数
 @param headerParams 请求 Header
 @param bizParams 请求业务参数
 @param config 请求配置
 @return 返回请求对象
 */
- (instancetype)initWithName:(nonnull NSString *)name
                  requestUrl:(nonnull NSString *)requestUrl
                commonParams:(nonnull PTCommonRequestParameterMessage *)commonParams
                headerParams:(nonnull PTHeaderMessage *)headerParams
                   bizParams:(nonnull id)bizParams
                      config:(nonnull PTApiNewageConfig *)config;
/**
 获取完整URL
 @return 完整URL
 */
- (NSString *)fullURL;
@end
#pragma mark - PTApiResponse
@interface PTApiResponse : NSObject
/**
 反序列化后的业务参数
 */
@property (nonatomic, strong, readonly, nullable) PTModel *bizResult;
/**
 反序列化后的公共参数
 */
@property (nonatomic, strong, readonly, nonnull) PTCommonResponseParameterMessage *commonResult;
/**
 请求的参数对象
 */
@property (nonatomic, strong, readonly, nonnull) PTApiRequest *request;
/**
 实例化请求返回
 @param request 请求的参数对象
 @param bizResult 反序列化后的业务参数
 @param commonResult 反序列化后的同意参数
 @return 请求返回结果
 */
- (instancetype)initWithRequest:(nonnull PTApiRequest *)request
                      bizResult:(nullable PTModel *)bizResult
                   commonResult:(nonnull PTCommonResponseParameterMessage *)commonResult;
/**
 请求方法名
 @return RequestName
 */
- (NSString *)requestName;
/**
 请求URL,非完整URL
 @return RequestUrl
 */
- (NSString *)requestUrl;
/**
 完整的请求URL
 @return fullUrl
 */
- (NSString *)fullUrl;
/**
 请求的业务参数
 @return BizParams
 */
- (id)bizParams;
/**
 请求的公共参数
 @return PTCommonRequestParameter
 */
- (PTCommonRequestParameterMessage *)commonParams;
/**
 请求的参数配置
 @return PTApiNewageConfig
 */
- (PTApiNewageConfig *)config;
@end
#pragma mark - PTApiNewageDelegate
@protocol PTApiNewageDelegate <NSObject>
@optional
/**
 请求即将开始时回调.请求参数拼接之后,请求发起之前
 @param request 请求参数
 @param context 自定义上下文参数
 */
- (void)requestWillStart:(PTApiRequest *)request
                 context:(NSMutableDictionary *)context;
/**
 请求即将结束时回调,在参数解析之前
 @param request 请求参数
 @param context 自定义上下文参数
 */
- (void)requestWillStop:(PTApiRequest *)request
                context:(NSMutableDictionary *)context;
/**
 请求结束时,请求成功回调
 @param request 请求参数
 @param response 请求结果
 @param context 自定义上下文参数
 */
- (void)requestSuccessed:(PTApiRequest *)request
                response:(PTApiResponse *)response
                 context:(NSMutableDictionary *)context;
/**
 请求结束时,失败回调
 @param request 请求参数
 @param error 请求报错
 @param context 自定义上下文参数
 */
- (void)requestFailed:(PTApiRequest *)request
                error:(NSError *)error
              context:(NSMutableDictionary *)context;
/**
 请求结束时回调,在vrequestSuccessed和requestFailed之后调用
 @param request 请求参数
 @param response 请求结果
 @param error 请求报错
 @param context 自定义上下文参数
 */
- (void)requestDidStop:(PTApiRequest *)request
              response:(PTApiResponse *)response
                 error:(NSError *)error
               context:(NSMutableDictionary *)context;
@end
#pragma mark - PTApiNewageService
/**
 请求成功
 @param ptResp 成功后的Block
 */
typedef void (^PTRequestCompletionSuccessBlock)(PTApiResponse *_Nonnull ptResp);
/**
 请求失败
 @param ptError 失败后的Block
 */
typedef void (^PTRequestCompletionErrorBlock)(NSError *_Nonnull ptError);
/**
 修改公共参数
 @param commonParams 公共参数
 */
typedef void (^PTCommonRequestParameterBlock)(PTCommonRequestParameterMessage *_Nonnull commonParams);
/**
 修改 Header 参数
 @param headerParams 公共参数
 */
typedef void (^PTHeaderRequestParameterBlock)(PTHeaderMessage *_Nonnull headerParams);
@interface PTApiNewageService : NSObject
@property (nonatomic, class, readonly, nonnull) PTApiNewageService *shared;
/**
 请求配置,所有请求共享
 */
@property (nonatomic, strong, readonly, nonnull) PTApiNewageConfig *config;
/**
 设置公共参数
 */
@property (nonatomic, copy) PTCommonRequestParameterBlock commonParamsBlock;
/**
 设置 Header 参数
 */
@property (nonatomic, copy) PTHeaderRequestParameterBlock headerParamsBlock;
/**
 全局请求配置的copy值
 @return copyConfig
 */
- (nonnull PTApiNewageConfig *)copyConfig;
/**
 创建一个请求,并且返回信号
 @param params 请求业务参数
 @param requestUrl URL
 @param resultClass 返回结果的类型
 @param requestName 请求Name
 @param apiConfig 请求配置,可以覆盖主配置
 @return 请求结果信号
 */
- (nonnull RACSignal *)rac_StartWithParams:(nonnull PTModel *)params
                                requestUrl:(nonnull NSString *)requestUrl
                               resultClass:(nonnull Class)resultClass
                               requestName:(nonnull NSString *)requestName
                                 apiConfig:(nullable PTApiNewageConfig *)apiConfig;
@end
NS_ASSUME_NONNULL_END
