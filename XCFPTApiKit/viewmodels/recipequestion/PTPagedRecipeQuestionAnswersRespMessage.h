// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedRecipeQuestionAnswersRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecipeQuestionAnswerV2Message *> *answers;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
