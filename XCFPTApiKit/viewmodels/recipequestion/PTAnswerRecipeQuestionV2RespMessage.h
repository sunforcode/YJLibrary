// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeQuestionAnswerV2Message.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAnswerRecipeQuestionV2RespMessage : PTModel
@property (nonatomic, strong) PTRecipeQuestionAnswerV2Message *answer;
@end
NS_ASSUME_NONNULL_END
