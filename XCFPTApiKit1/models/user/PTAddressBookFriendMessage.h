// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAddressBookFriendMessage : PTModel
@property (nonatomic, strong) PTUserMessage *user;
@property (nonatomic, copy) NSString *contactName;
@end
NS_ASSUME_NONNULL_END
