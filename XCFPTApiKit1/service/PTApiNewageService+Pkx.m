// apic_version = 0.6.1
#import "PTApiNewageService+Pkx.h"
@implementation PTApiNewageService (Pkx)
- (RACSignal *)pkxRegisterPdidWithReqParameters:(PTPkxRegisterPdidReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"pkx/register.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPkxRegisterPdidRespMessage.class
                         requestName:@"PkxRegisterPdid"
                           apiConfig:apiConfig];
}
- (RACSignal *)pkxRegisterPdidWithReqParameters:(PTPkxRegisterPdidReqMessage *)reqParameters {
    return [self pkxRegisterPdidWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pkxRegisterPdidv2WithReqParameters:(PTPkxRegisterPdidv2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"pkx/register_v2.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPkxRegisterPdidv2RespMessage.class
                         requestName:@"PkxRegisterPdidv2"
                           apiConfig:apiConfig];
}
- (RACSignal *)pkxRegisterPdidv2WithReqParameters:(PTPkxRegisterPdidv2ReqMessage *)reqParameters {
    return [self pkxRegisterPdidv2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
