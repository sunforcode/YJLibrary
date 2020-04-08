// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTEssayCommentMessage : PTModel
@property (nonatomic, copy) NSString *essayCommentId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, strong) NSArray<PTUserMessage *> *atUsers;
@property (nonatomic, copy) NSString *essayId;
@end
NS_ASSUME_NONNULL_END
