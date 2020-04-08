// apic_version = 0.5.5
#import "PTApiNewageService+Advertiser.h"
@implementation PTApiNewageService (Advertiser)
- (RACSignal *)getAdvertiserProductWithReqParameters:(PTGetAdvertiserProductReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/products.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserProductRespMessage.class
                         requestName:@"GetAdvertiserProduct"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserProductWithReqParameters:(PTGetAdvertiserProductReqMessage *)reqParameters {
    return [self getAdvertiserProductWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserDataStatisticWithReqParameters:(PTGetAdvertiserDataStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/data_statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserDataStatisticRespMessage.class
                         requestName:@"GetAdvertiserDataStatistic"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserDataStatisticWithReqParameters:(PTGetAdvertiserDataStatisticReqMessage *)reqParameters {
    return [self getAdvertiserDataStatisticWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserRecipeDailyStatisticWithReqParameters:(PTGetAdvertiserRecipeDailyStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/recipe_daily_statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserRecipeDailyStatisticRespMessage.class
                         requestName:@"GetAdvertiserRecipeDailyStatistic"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserRecipeDailyStatisticWithReqParameters:(PTGetAdvertiserRecipeDailyStatisticReqMessage *)reqParameters {
    return [self getAdvertiserRecipeDailyStatisticWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserKeywordStatisticWithReqParameters:(PTGetAdvertiserKeywordStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/keyword/statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserKeywordStatisticRespMessage.class
                         requestName:@"GetAdvertiserKeywordStatistic"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserKeywordStatisticWithReqParameters:(PTGetAdvertiserKeywordStatisticReqMessage *)reqParameters {
    return [self getAdvertiserKeywordStatisticWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserSourceImpressionStatisticWithReqParameters:(PTGetAdvertiserSourceImpressionStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/source_impression/statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserSourceImpressionStatisticRespMessage.class
                         requestName:@"GetAdvertiserSourceImpressionStatistic"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserSourceImpressionStatisticWithReqParameters:(PTGetAdvertiserSourceImpressionStatisticReqMessage *)reqParameters {
    return [self getAdvertiserSourceImpressionStatisticWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserOneDayOneNumberStatWithReqParameters:(PTGetAdvertiserOneDayOneNumberStatReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/one_day_one_number_stat.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserOneDayOneNumberStatRespMessage.class
                         requestName:@"GetAdvertiserOneDayOneNumberStat"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserOneDayOneNumberStatWithReqParameters:(PTGetAdvertiserOneDayOneNumberStatReqMessage *)reqParameters {
    return [self getAdvertiserOneDayOneNumberStatWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserAccessSourceStatisticWithReqParameters:(PTGetAdvertiserAccessSourceStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/access_source/statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserAccessSourceStatisticRespMessage.class
                         requestName:@"GetAdvertiserAccessSourceStatistic"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserAccessSourceStatisticWithReqParameters:(PTGetAdvertiserAccessSourceStatisticReqMessage *)reqParameters {
    return [self getAdvertiserAccessSourceStatisticWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserAccessTopTenStatisticWithReqParameters:(PTGetAdvertiserAccessTopTenStatisticReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/access_top_ten/statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserAccessTopTenStatisticRespMessage.class
                         requestName:@"GetAdvertiserAccessTopTenStatistic"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserAccessTopTenStatisticWithReqParameters:(PTGetAdvertiserAccessTopTenStatisticReqMessage *)reqParameters {
    return [self getAdvertiserAccessTopTenStatisticWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getAdvertiserQuestionnaireStatisticsWithReqParameters:(PTGetAdvertiserQuestionnaireStatisticsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"advertiser/questionnaire/statistic.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetAdvertiserQuestionnaireStatisticsRespMessage.class
                         requestName:@"GetAdvertiserQuestionnaireStatistics"
                           apiConfig:apiConfig];
}
- (RACSignal *)getAdvertiserQuestionnaireStatisticsWithReqParameters:(PTGetAdvertiserQuestionnaireStatisticsReqMessage *)reqParameters {
    return [self getAdvertiserQuestionnaireStatisticsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
