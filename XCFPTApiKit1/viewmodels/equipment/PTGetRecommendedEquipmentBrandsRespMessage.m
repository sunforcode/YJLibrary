// apic_version = 0.6.1
#import "PTGetRecommendedEquipmentBrandsRespMessage.h"
@implementation PTGetRecommendedEquipmentBrandsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"brands" : [PTSelectableEquipmentBrandCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"brands": @"brands",@"addBrandCell": @"add_brand_cell",};
}
@end
