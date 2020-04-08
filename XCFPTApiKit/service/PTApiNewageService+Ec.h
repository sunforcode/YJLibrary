// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTPagedEcHomepageTabsReqMessage.h"
#import "PTPagedEcHomepageRecommendationsReqMessage.h"
#import "PTPagedEcHomepageTabsRespMessage.h"
#import "PTPagedEcHomepageRecommendationsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Ec)
/**
  市集首页 tab 分页
*/
- (RACSignal *)pagedEcHomepageTabsWithReqParameters:(PTPagedEcHomepageTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  市集首页 tab 分页
*/
- (RACSignal *)pagedEcHomepageTabsWithReqParameters:(PTPagedEcHomepageTabsReqMessage *)reqParameters;
/**
  市集首页猜你喜欢推荐翻页
*/
- (RACSignal *)pagedEcHomepageRecommendationsWithReqParameters:(PTPagedEcHomepageRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  市集首页猜你喜欢推荐翻页
*/
- (RACSignal *)pagedEcHomepageRecommendationsWithReqParameters:(PTPagedEcHomepageRecommendationsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
