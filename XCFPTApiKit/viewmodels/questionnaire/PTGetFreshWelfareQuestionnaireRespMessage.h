// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionnaireMessage.h"
#import "PTRememberedAnswerInfoMessage.h"
#import "PTUserAnswerMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetFreshWelfareQuestionnaireRespMessage : PTModel
@property (nonatomic, strong) PTQuestionnaireMessage *questionnaire;
/**
  一些用户已经输入过的固定问卷题目, 用户新问卷可以跳过
*/
@property (nonatomic, strong) PTRememberedAnswerInfoMessage *rememberedAnswerInfo;
/**
  用户的问卷答案
*/
@property (nonatomic, strong) PTUserAnswerMessage *userAnswer;
@end
NS_ASSUME_NONNULL_END
