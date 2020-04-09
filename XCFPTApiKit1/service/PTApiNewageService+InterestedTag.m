// apic_version = 0.6.1
#import "PTApiNewageService+InterestedTag.h"
@implementation PTApiNewageService (InterestedTag)
- (RACSignal *)getInterestedTagsWithReqParameters:(PTGetInterestedTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"interested_tag/get.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetInterestedTagsRespMessage.class
                         requestName:@"GetInterestedTags"
                           apiConfig:apiConfig];
}
- (RACSignal *)getInterestedTagsWithReqParameters:(PTGetInterestedTagsReqMessage *)reqParameters {
    return [self getInterestedTagsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)setInterestedTagsWithReqParameters:(PTSetInterestedTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"interested_tag/set.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSetInterestedTagsRespMessage.class
                         requestName:@"SetInterestedTags"
                           apiConfig:apiConfig];
}
- (RACSignal *)setInterestedTagsWithReqParameters:(PTSetInterestedTagsReqMessage *)reqParameters {
    return [self setInterestedTagsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
