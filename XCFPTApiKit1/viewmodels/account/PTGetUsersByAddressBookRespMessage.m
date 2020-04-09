// apic_version = 0.6.1
#import "PTGetUsersByAddressBookRespMessage.h"
@implementation PTGetUsersByAddressBookRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"friends" : [PTAddressBookFriendMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"friends": @"friends",@"cursor": @"cursor",};
}
@end
