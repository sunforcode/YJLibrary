// apic_version = 0.5.5
#import "PTSearchEquipmentCategoriesRespMessage.h"
@implementation PTSearchEquipmentCategoriesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"categories" : [PTEquipmentCategoryMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"categories": @"categories",};
}
@end
