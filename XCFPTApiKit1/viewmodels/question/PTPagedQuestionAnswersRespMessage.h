// apic_version = 0.6.1
#import "PTModel.h"
#import "PTQuestionAnswerMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedQuestionAnswersRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTQuestionAnswerMessage *> *answers;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
