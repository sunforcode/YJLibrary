// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetShareRecipeTitleReqMessage.h"
#import "PTGetShareRecipeTitleRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (ShareRecipe)
/**
  获取分享菜谱到微信的标题和打点
*/
- (RACSignal *)getShareRecipeTitleWithReqParameters:(PTGetShareRecipeTitleReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取分享菜谱到微信的标题和打点
*/
- (RACSignal *)getShareRecipeTitleWithReqParameters:(PTGetShareRecipeTitleReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
