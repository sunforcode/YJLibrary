// apic_version = 0.6.1
#import "PTApiNewageService+City.h"
@implementation PTApiNewageService (City)
- (RACSignal *)getSameCityRecommendationsWithReqParameters:(PTGetSameCityRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"city/get_same_city_recommendations.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetSameCityRecommendationsRespMessage.class
                         requestName:@"GetSameCityRecommendations"
                           apiConfig:apiConfig];
}
- (RACSignal *)getSameCityRecommendationsWithReqParameters:(PTGetSameCityRecommendationsReqMessage *)reqParameters {
    return [self getSameCityRecommendationsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
