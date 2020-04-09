// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTPkxRegisterPdidReqMessage.h"
#import "PTPkxRegisterPdidv2ReqMessage.h"
#import "PTPkxRegisterPdidRespMessage.h"
#import "PTPkxRegisterPdidv2RespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Pkx)
/**
  客户端请求获取 pdid
*/
- (RACSignal *)pkxRegisterPdidWithReqParameters:(PTPkxRegisterPdidReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  客户端请求获取 pdid
*/
- (RACSignal *)pkxRegisterPdidWithReqParameters:(PTPkxRegisterPdidReqMessage *)reqParameters;
/**
  客户端请求获取 pdid v2
*/
- (RACSignal *)pkxRegisterPdidv2WithReqParameters:(PTPkxRegisterPdidv2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  客户端请求获取 pdid v2
*/
- (RACSignal *)pkxRegisterPdidv2WithReqParameters:(PTPkxRegisterPdidv2ReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
