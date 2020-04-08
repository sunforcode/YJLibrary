// apic_version = 0.5.5
#import "PTGetRecommendedEquipmentCategoriesRespMessage.h"
@implementation PTGetRecommendedEquipmentCategoriesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"categories" : [PTEquipmentCategoryMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"categories": @"categories",};
}
@end
