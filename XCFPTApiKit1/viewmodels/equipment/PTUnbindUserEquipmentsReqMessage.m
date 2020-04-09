// apic_version = 0.6.1
#import "PTUnbindUserEquipmentsReqMessage.h"
@implementation PTUnbindUserEquipmentsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"equipmentIds": @"equipment_ids",};
}
@end
