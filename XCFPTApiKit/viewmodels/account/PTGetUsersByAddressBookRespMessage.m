// apic_version = 0.5.5
#import "PTGetUsersByAddressBookRespMessage.h"
@implementation PTGetUsersByAddressBookRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"friends" : [PTAddressBookFriendMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"friends": @"friends",@"cursor": @"cursor",};
}
@end
