// apic_version = 0.6.1
#import "PTApiNewageService+Ec.h"
@implementation PTApiNewageService (Ec)
- (RACSignal *)pagedEcHomepageTabsWithReqParameters:(PTPagedEcHomepageTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"ec/homepage/paged_tabs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedEcHomepageTabsRespMessage.class
                         requestName:@"PagedEcHomepageTabs"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedEcHomepageTabsWithReqParameters:(PTPagedEcHomepageTabsReqMessage *)reqParameters {
    return [self pagedEcHomepageTabsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedEcHomepageRecommendationsWithReqParameters:(PTPagedEcHomepageRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"ec/homepage/paged_goods_recommendations.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedEcHomepageRecommendationsRespMessage.class
                         requestName:@"PagedEcHomepageRecommendations"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedEcHomepageRecommendationsWithReqParameters:(PTPagedEcHomepageRecommendationsReqMessage *)reqParameters {
    return [self pagedEcHomepageRecommendationsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
