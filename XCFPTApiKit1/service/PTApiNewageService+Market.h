// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetMarketTabsReqMessage.h"
#import "PTCommentPromptRulesReqMessage.h"
#import "PTGetMarketTabsRespMessage.h"
#import "PTCommentPromptRulesRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Market)
/**
  获取市集首页运营位列表
*/
- (RACSignal *)getMarketTabsWithReqParameters:(PTGetMarketTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取市集首页运营位列表
*/
- (RACSignal *)getMarketTabsWithReqParameters:(PTGetMarketTabsReqMessage *)reqParameters;
/**
  获取评论文案规则
*/
- (RACSignal *)commentPromptRulesWithReqParameters:(PTCommentPromptRulesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取评论文案规则
*/
- (RACSignal *)commentPromptRulesWithReqParameters:(PTCommentPromptRulesReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
