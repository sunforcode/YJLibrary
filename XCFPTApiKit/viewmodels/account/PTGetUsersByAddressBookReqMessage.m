// apic_version = 0.5.5
#import "PTGetUsersByAddressBookReqMessage.h"
@implementation PTGetUsersByAddressBookReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",};
}
@end
