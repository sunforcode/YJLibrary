// apic_version = 0.5.5
#import "PTSearchEquipmentBrandsRespMessage.h"
@implementation PTSearchEquipmentBrandsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"brands" : [PTEquipmentBrandMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"brands": @"brands",};
}
@end
