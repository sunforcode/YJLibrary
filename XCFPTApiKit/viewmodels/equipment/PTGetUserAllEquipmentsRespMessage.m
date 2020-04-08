// apic_version = 0.5.5
#import "PTGetUserAllEquipmentsRespMessage.h"
@implementation PTGetUserAllEquipmentsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"equipments" : [PTEquipmentMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"equipments": @"equipments",};
}
@end
