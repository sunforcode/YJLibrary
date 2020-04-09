// apic_version = 0.6.1
#import "PTApiNewageService+VodVideo.h"
@implementation PTApiNewageService (VodVideo)
- (RACSignal *)getSignatureWithReqParameters:(PTGetSignatureReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"vod_video/get_signature.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetSignatureRespMessage.class
                         requestName:@"GetSignature"
                           apiConfig:apiConfig];
}
- (RACSignal *)getSignatureWithReqParameters:(PTGetSignatureReqMessage *)reqParameters {
    return [self getSignatureWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
