// apic_version = 0.6.1
#import "PTApiNewageService+Feeds.h"
@implementation PTApiNewageService (Feeds)
- (RACSignal *)getRecipeFeedsWithReqParameters:(PTGetRecipeFeedsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe_feed/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecipeFeedsRespMessage.class
                         requestName:@"GetRecipeFeeds"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecipeFeedsWithReqParameters:(PTGetRecipeFeedsReqMessage *)reqParameters {
    return [self getRecipeFeedsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)markRecipeFeedsAsReadWithReqParameters:(PTMarkRecipeFeedsAsReadReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe_feed/mark_as_read.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTMarkRecipeFeedsAsReadRespMessage.class
                         requestName:@"MarkRecipeFeedsAsRead"
                           apiConfig:apiConfig];
}
- (RACSignal *)markRecipeFeedsAsReadWithReqParameters:(PTMarkRecipeFeedsAsReadReqMessage *)reqParameters {
    return [self markRecipeFeedsAsReadWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getRecipeFeedsV2WithReqParameters:(PTGetRecipeFeedsV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe_feed/list_v2.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecipeFeedsV2RespMessage.class
                         requestName:@"GetRecipeFeedsV2"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecipeFeedsV2WithReqParameters:(PTGetRecipeFeedsV2ReqMessage *)reqParameters {
    return [self getRecipeFeedsV2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getFeedsGroupsWithReqParameters:(PTGetFeedsGroupsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"feeds/feeds_groups.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetFeedsGroupsRespMessage.class
                         requestName:@"GetFeedsGroups"
                           apiConfig:apiConfig];
}
- (RACSignal *)getFeedsGroupsWithReqParameters:(PTGetFeedsGroupsReqMessage *)reqParameters {
    return [self getFeedsGroupsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)markFeedsAsReadWithReqParameters:(PTMarkFeedsAsReadReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"feeds/mark_as_read.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTMarkFeedsAsReadRespMessage.class
                         requestName:@"MarkFeedsAsRead"
                           apiConfig:apiConfig];
}
- (RACSignal *)markFeedsAsReadWithReqParameters:(PTMarkFeedsAsReadReqMessage *)reqParameters {
    return [self markFeedsAsReadWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
