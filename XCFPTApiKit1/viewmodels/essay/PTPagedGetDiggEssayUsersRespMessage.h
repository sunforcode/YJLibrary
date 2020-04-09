// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedGetDiggEssayUsersRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTUserMessage *> *users;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
