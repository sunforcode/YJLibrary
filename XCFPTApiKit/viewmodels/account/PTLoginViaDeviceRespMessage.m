// apic_version = 0.5.5
#import "PTLoginViaDeviceRespMessage.h"
@implementation PTLoginViaDeviceRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"account": @"account",@"isDeviceOnlyUser": @"is_device_only_user",};
}
@end
