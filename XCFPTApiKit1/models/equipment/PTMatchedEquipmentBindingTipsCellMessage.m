// apic_version = 0.6.1
#import "PTMatchedEquipmentBindingTipsCellMessage.h"
@implementation PTMatchedEquipmentBindingTipsCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"hotBrands" : [PTEquipmentBrandMessage class],@"moreBrands" : [PTEquipmentBrandMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title": @"title",@"desc": @"desc",@"category": @"category",@"hotBrands": @"hot_brands",@"moreBrands": @"more_brands",@"getMoreButton": @"get_more_button",@"pos": @"pos",};
}
@end
