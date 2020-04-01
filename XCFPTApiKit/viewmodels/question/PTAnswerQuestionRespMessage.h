// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionAnswerMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAnswerQuestionRespMessage : PTModel
@property (nonatomic, strong) PTQuestionAnswerMessage *answer;
@end
NS_ASSUME_NONNULL_END
