// apic_version = 0.5.5
#import "PTLoginViaDeviceReqMessage.h"
@implementation PTLoginViaDeviceReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"deviceId": @"device_id",};
}
@end
