// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEssayCommentMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListCommentRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEssayCommentMessage *> *comments;
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, assign) int32_t nComments;
@end
NS_ASSUME_NONNULL_END
