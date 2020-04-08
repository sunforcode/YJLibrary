// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEssayCommentMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCreateCommentRespMessage : PTModel
@property (nonatomic, assign) BOOL isSuccess;
@property (nonatomic, strong) PTEssayCommentMessage *comment;
@end
NS_ASSUME_NONNULL_END
