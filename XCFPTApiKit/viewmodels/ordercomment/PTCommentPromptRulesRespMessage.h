// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCommentPromptRuleMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCommentPromptRulesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTCommentPromptRuleMessage *> *rules;
@property (nonatomic, copy) NSString *mainText;
@end
NS_ASSUME_NONNULL_END
