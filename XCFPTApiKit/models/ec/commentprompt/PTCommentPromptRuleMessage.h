// apic_version = 0.5.5
#import "PTModel.h"
#import "PTTextConditionMessage.h"
#import "PTImageConditionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCommentPromptRuleMessage : PTModel
@property (nonatomic, strong) PTTextConditionMessage *textCondition;
@property (nonatomic, strong) PTImageConditionMessage *imageCondition;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) int32_t weight;
@end
NS_ASSUME_NONNULL_END
