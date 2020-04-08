// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeQuestionMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedRecipeQuestionsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecipeQuestionMessage *> *questions;
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, assign) int32_t total;
@end
NS_ASSUME_NONNULL_END
