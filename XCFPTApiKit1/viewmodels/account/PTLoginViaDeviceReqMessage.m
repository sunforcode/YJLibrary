// apic_version = 0.6.1
#import "PTLoginViaDeviceReqMessage.h"
@implementation PTLoginViaDeviceReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"deviceId": @"device_id",};
}
@end
