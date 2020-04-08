// apic_version = 0.5.5
#import "PTAddressBookFriendMessage.h"
@implementation PTAddressBookFriendMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"user": @"user",@"contactName": @"contact_name",};
}
@end
