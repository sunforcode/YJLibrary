// apic_version = 0.5.5
#import "PTApiNewageService+Search.h"
@implementation PTApiNewageService (Search)
- (RACSignal *)waterfallStyleUniversalSearchKeywordsWithReqParameters:(PTWaterfallStyleUniversalSearchKeywordsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"search/waterfall_style/experiment_keywords.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTWaterfallStyleUniversalSearchKeywordsRespMessage.class
                         requestName:@"WaterfallStyleUniversalSearchKeywords"
                           apiConfig:apiConfig];
}
- (RACSignal *)waterfallStyleUniversalSearchKeywordsWithReqParameters:(PTWaterfallStyleUniversalSearchKeywordsReqMessage *)reqParameters {
    return [self waterfallStyleUniversalSearchKeywordsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)waterfallStyleUniversalSearchWithReqParameters:(PTWaterfallStyleUniversalSearchReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"search/waterfall_style/universal_search.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTWaterfallStyleUniversalSearchRespMessage.class
                         requestName:@"WaterfallStyleUniversalSearch"
                           apiConfig:apiConfig];
}
- (RACSignal *)waterfallStyleUniversalSearchWithReqParameters:(PTWaterfallStyleUniversalSearchReqMessage *)reqParameters {
    return [self waterfallStyleUniversalSearchWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)searchPageRecommendationKeywordsWithReqParameters:(PTSearchPageRecommendationKeywordsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"search/search_page_recommendation_keywords.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSearchPageRecommendationKeywordsRespMessage.class
                         requestName:@"SearchPageRecommendationKeywords"
                           apiConfig:apiConfig];
}
- (RACSignal *)searchPageRecommendationKeywordsWithReqParameters:(PTSearchPageRecommendationKeywordsReqMessage *)reqParameters {
    return [self searchPageRecommendationKeywordsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)universalSearchV3WithReqParameters:(PTUniversalSearchV3ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"search/universal_search_v3.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUniversalSearchV3RespMessage.class
                         requestName:@"UniversalSearchV3"
                           apiConfig:apiConfig];
}
- (RACSignal *)universalSearchV3WithReqParameters:(PTUniversalSearchV3ReqMessage *)reqParameters {
    return [self universalSearchV3WithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
