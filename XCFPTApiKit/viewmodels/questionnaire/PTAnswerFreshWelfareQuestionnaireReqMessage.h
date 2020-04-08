// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionnaireQuestionAnswerMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAnswerFreshWelfareQuestionnaireReqMessage : PTModel
@property (nonatomic, copy) NSString *questionnaireId;
@property (nonatomic, strong) NSArray<PTQuestionnaireQuestionAnswerMessage *> *questionAnswers;
@end
NS_ASSUME_NONNULL_END
