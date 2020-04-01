// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeQuestionV2Message.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedRecipeQuestionsV2RespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecipeQuestionV2Message *> *questions;
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, assign) int32_t total;
@end
NS_ASSUME_NONNULL_END
