// apic_version = 0.6.1
#import "PTSearchEquipmentBrandsRespMessage.h"
@implementation PTSearchEquipmentBrandsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"brands" : [PTSelectableEquipmentBrandCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"brands": @"brands",};
}
@end
