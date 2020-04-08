// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedQuestionsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTQuestionMessage *> *questions;
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, assign) int32_t total;
@end
NS_ASSUME_NONNULL_END
