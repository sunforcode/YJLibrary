// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetSameCityRecommendationsReqMessage.h"
#import "PTGetSameCityRecommendationsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (City)
/**
  获取同城推荐
*/
- (RACSignal *)getSameCityRecommendationsWithReqParameters:(PTGetSameCityRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取同城推荐
*/
- (RACSignal *)getSameCityRecommendationsWithReqParameters:(PTGetSameCityRecommendationsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
