// apic_version = 0.5.5
#import "PTGetRecommendedEquipmentBrandsRespMessage.h"
@implementation PTGetRecommendedEquipmentBrandsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"brands" : [PTEquipmentBrandMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"brands": @"brands",};
}
@end
