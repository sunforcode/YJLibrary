// apic_version = 0.6.1
#import "PTApiNewageService+Market.h"
@implementation PTApiNewageService (Market)
- (RACSignal *)getMarketTabsWithReqParameters:(PTGetMarketTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"market/market_tabs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetMarketTabsRespMessage.class
                         requestName:@"GetMarketTabs"
                           apiConfig:apiConfig];
}
- (RACSignal *)getMarketTabsWithReqParameters:(PTGetMarketTabsReqMessage *)reqParameters {
    return [self getMarketTabsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)commentPromptRulesWithReqParameters:(PTCommentPromptRulesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"order_comment/comment_prompt_rules.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCommentPromptRulesRespMessage.class
                         requestName:@"CommentPromptRules"
                           apiConfig:apiConfig];
}
- (RACSignal *)commentPromptRulesWithReqParameters:(PTCommentPromptRulesReqMessage *)reqParameters {
    return [self commentPromptRulesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
