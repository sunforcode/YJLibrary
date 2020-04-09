// apic_version = 0.6.1
#import "PTAccountMessage.h"
@implementation PTAccountMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"user": @"user",@"sk": @"sk",@"isAdmin": @"is_admin",@"mobilePhone": @"mobile_phone",};
}
@end
