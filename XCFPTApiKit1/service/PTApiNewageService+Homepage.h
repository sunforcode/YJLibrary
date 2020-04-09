// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTPagedHomepageDiscoverTabRecommendationsReqMessage.h"
#import "PTPagedHomepageDiscoverTabRecommendationsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Homepage)
/**
  翻页取首页发现 tab 内容
*/
- (RACSignal *)pagedHomepageDiscoverTabRecommendationsWithReqParameters:(PTPagedHomepageDiscoverTabRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  翻页取首页发现 tab 内容
*/
- (RACSignal *)pagedHomepageDiscoverTabRecommendationsWithReqParameters:(PTPagedHomepageDiscoverTabRecommendationsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
