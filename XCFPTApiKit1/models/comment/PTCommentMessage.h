// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCommentMessage : PTModel
@property (nonatomic, copy) NSString *commentId;
@property (nonatomic, copy) NSString *txt;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, strong) NSArray<PTUserMessage *> *atUsers;
@end
NS_ASSUME_NONNULL_END
