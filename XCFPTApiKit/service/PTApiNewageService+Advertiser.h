// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTGetAdvertiserProductReqMessage.h"
#import "PTGetAdvertiserDataStatisticReqMessage.h"
#import "PTGetAdvertiserRecipeDailyStatisticReqMessage.h"
#import "PTGetAdvertiserKeywordStatisticReqMessage.h"
#import "PTGetAdvertiserSourceImpressionStatisticReqMessage.h"
#import "PTGetAdvertiserOneDayOneNumberStatReqMessage.h"
#import "PTGetAdvertiserAccessSourceStatisticReqMessage.h"
#import "PTGetAdvertiserAccessTopTenStatisticReqMessage.h"
#import "PTGetAdvertiserQuestionnaireStatisticsReqMessage.h"
#import "PTGetAdvertiserProductRespMessage.h"
#import "PTGetAdvertiserDataStatisticRespMessage.h"
#import "PTGetAdvertiserRecipeDailyStatisticRespMessage.h"
#import "PTGetAdvertiserKeywordStatisticRespMessage.h"
#import "PTGetAdvertiserSourceImpressionStatisticRespMessage.h"
#import "PTGetAdvertiserOneDayOneNumberStatRespMessage.h"
#import "PTGetAdvertiserAccessSourceStatisticRespMessage.h"
#import "PTGetAdvertiserAccessTopTenStatisticRespMessage.h"
#import "PTGetAdvertiserQuestionnaireStatisticsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Advertiser)
/**
  获取广告主商品信息
*/
- (RACSignal *)getAdvertiserProductWithReqParameters:(PTGetAdvertiserProductReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主商品信息
*/
- (RACSignal *)getAdvertiserProductWithReqParameters:(PTGetAdvertiserProductReqMessage *)reqParameters;
/**
  获取广告主数据
*/
- (RACSignal *)getAdvertiserDataStatisticWithReqParameters:(PTGetAdvertiserDataStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主数据
*/
- (RACSignal *)getAdvertiserDataStatisticWithReqParameters:(PTGetAdvertiserDataStatisticReqMessage *)reqParameters;
/**
  获取广告主每日的菜谱相关统计数据
*/
- (RACSignal *)getAdvertiserRecipeDailyStatisticWithReqParameters:(PTGetAdvertiserRecipeDailyStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主每日的菜谱相关统计数据
*/
- (RACSignal *)getAdvertiserRecipeDailyStatisticWithReqParameters:(PTGetAdvertiserRecipeDailyStatisticReqMessage *)reqParameters;
/**
  获取广告主关键字统计数据
*/
- (RACSignal *)getAdvertiserKeywordStatisticWithReqParameters:(PTGetAdvertiserKeywordStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主关键字统计数据
*/
- (RACSignal *)getAdvertiserKeywordStatisticWithReqParameters:(PTGetAdvertiserKeywordStatisticReqMessage *)reqParameters;
/**
  获取广告主的来源曝光统计
*/
- (RACSignal *)getAdvertiserSourceImpressionStatisticWithReqParameters:(PTGetAdvertiserSourceImpressionStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主的来源曝光统计
*/
- (RACSignal *)getAdvertiserSourceImpressionStatisticWithReqParameters:(PTGetAdvertiserSourceImpressionStatisticReqMessage *)reqParameters;
/**
  广告主每日相关的统计数据
*/
- (RACSignal *)getAdvertiserOneDayOneNumberStatWithReqParameters:(PTGetAdvertiserOneDayOneNumberStatReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  广告主每日相关的统计数据
*/
- (RACSignal *)getAdvertiserOneDayOneNumberStatWithReqParameters:(PTGetAdvertiserOneDayOneNumberStatReqMessage *)reqParameters;
/**
  获取广告主菜谱访问来源统计
*/
- (RACSignal *)getAdvertiserAccessSourceStatisticWithReqParameters:(PTGetAdvertiserAccessSourceStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主菜谱访问来源统计
*/
- (RACSignal *)getAdvertiserAccessSourceStatisticWithReqParameters:(PTGetAdvertiserAccessSourceStatisticReqMessage *)reqParameters;
/**
  获取广告主名下菜谱浏览最多前十统计信息
*/
- (RACSignal *)getAdvertiserAccessTopTenStatisticWithReqParameters:(PTGetAdvertiserAccessTopTenStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主名下菜谱浏览最多前十统计信息
*/
- (RACSignal *)getAdvertiserAccessTopTenStatisticWithReqParameters:(PTGetAdvertiserAccessTopTenStatisticReqMessage *)reqParameters;
/**
  获取广告主问卷统计数据
*/
- (RACSignal *)getAdvertiserQuestionnaireStatisticsWithReqParameters:(PTGetAdvertiserQuestionnaireStatisticsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取广告主问卷统计数据
*/
- (RACSignal *)getAdvertiserQuestionnaireStatisticsWithReqParameters:(PTGetAdvertiserQuestionnaireStatisticsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
