// apic_version = 0.5.5
#import "PTGetAllEquipmentBrandsByCategoryRespMessage.h"
@implementation PTGetAllEquipmentBrandsByCategoryRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"brands" : [PTEquipmentBrandMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"brands": @"brands",};
}
@end
