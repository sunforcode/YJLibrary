// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionnaireMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取问卷响应
*/
@interface PTGetQuestionnaireRespMessage : PTModel
@property (nonatomic, strong) PTQuestionnaireMessage *questionnaire;
@end
NS_ASSUME_NONNULL_END
