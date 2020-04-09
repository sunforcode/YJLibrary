// apic_version = 0.6.1
#import "PTApiNewageService+Chucode.h"
@implementation PTApiNewageService (Chucode)
- (RACSignal *)getChucodeWithReqParameters:(PTGetChucodeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"chucode/get.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetChucodeRespMessage.class
                         requestName:@"GetChucode"
                           apiConfig:apiConfig];
}
- (RACSignal *)getChucodeWithReqParameters:(PTGetChucodeReqMessage *)reqParameters {
    return [self getChucodeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
