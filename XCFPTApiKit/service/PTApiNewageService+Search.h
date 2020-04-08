// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTWaterfallStyleUniversalSearchKeywordsReqMessage.h"
#import "PTWaterfallStyleUniversalSearchReqMessage.h"
#import "PTSearchPageRecommendationKeywordsReqMessage.h"
#import "PTUniversalSearchV3ReqMessage.h"
#import "PTWaterfallStyleUniversalSearchKeywordsRespMessage.h"
#import "PTWaterfallStyleUniversalSearchRespMessage.h"
#import "PTSearchPageRecommendationKeywordsRespMessage.h"
#import "PTUniversalSearchV3RespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Search)
/**
  搜索瀑布流新样式实验关键词
*/
- (RACSignal *)waterfallStyleUniversalSearchKeywordsWithReqParameters:(PTWaterfallStyleUniversalSearchKeywordsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  搜索瀑布流新样式实验关键词
*/
- (RACSignal *)waterfallStyleUniversalSearchKeywordsWithReqParameters:(PTWaterfallStyleUniversalSearchKeywordsReqMessage *)reqParameters;
/**
  通用搜索接口(瀑布流新样式)
*/
- (RACSignal *)waterfallStyleUniversalSearchWithReqParameters:(PTWaterfallStyleUniversalSearchReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  通用搜索接口(瀑布流新样式)
*/
- (RACSignal *)waterfallStyleUniversalSearchWithReqParameters:(PTWaterfallStyleUniversalSearchReqMessage *)reqParameters;
/**
  搜索中间页关键词推荐
*/
- (RACSignal *)searchPageRecommendationKeywordsWithReqParameters:(PTSearchPageRecommendationKeywordsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  搜索中间页关键词推荐
*/
- (RACSignal *)searchPageRecommendationKeywordsWithReqParameters:(PTSearchPageRecommendationKeywordsReqMessage *)reqParameters;
/**
  通用搜索接口
*/
- (RACSignal *)universalSearchV3WithReqParameters:(PTUniversalSearchV3ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  通用搜索接口
*/
- (RACSignal *)universalSearchV3WithReqParameters:(PTUniversalSearchV3ReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
