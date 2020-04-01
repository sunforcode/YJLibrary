// apic_version = 0.5.5
#import "PTApiNewageService+Homepage.h"
@implementation PTApiNewageService (Homepage)
- (RACSignal *)pagedHomepageDiscoverTabRecommendationsWithReqParameters:(PTPagedHomepageDiscoverTabRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"homepage/paged_discover_tab_recommendations.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedHomepageDiscoverTabRecommendationsRespMessage.class
                         requestName:@"PagedHomepageDiscoverTabRecommendations"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedHomepageDiscoverTabRecommendationsWithReqParameters:(PTPagedHomepageDiscoverTabRecommendationsReqMessage *)reqParameters {
    return [self pagedHomepageDiscoverTabRecommendationsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
