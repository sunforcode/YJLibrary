// apic_version = 0.6.1
#import "PTGetRecommendedEquipmentCategoriesRespMessage.h"
@implementation PTGetRecommendedEquipmentCategoriesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"categories" : [PTEquipmentCategoryMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"categories": @"categories",@"firstDisplayNumber": @"first_display_number",@"addCategoryButton": @"add_category_button",};
}
@end
