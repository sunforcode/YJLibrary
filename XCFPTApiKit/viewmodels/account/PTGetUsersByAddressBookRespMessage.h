// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAddressBookFriendMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetUsersByAddressBookRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTAddressBookFriendMessage *> *friends;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
