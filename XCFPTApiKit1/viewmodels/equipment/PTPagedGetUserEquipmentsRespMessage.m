// apic_version = 0.6.1
#import "PTPagedGetUserEquipmentsRespMessage.h"
@implementation PTPagedGetUserEquipmentsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"equipments" : [PTUserEquipmentMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"equipments": @"equipments",@"cursor": @"cursor",};
}
@end
