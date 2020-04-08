// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSimilarQuestionMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSearchQuestionRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSimilarQuestionMessage *> *questions;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
