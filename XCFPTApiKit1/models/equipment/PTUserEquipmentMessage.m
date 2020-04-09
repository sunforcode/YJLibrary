// apic_version = 0.6.1
#import "PTUserEquipmentMessage.h"
@implementation PTUserEquipmentMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"equipmentId": @"equipment_id",@"displayName": @"display_name",@"model": @"model",@"image": @"image",};
}
@end
