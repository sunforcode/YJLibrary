// apic_version = 0.5.5
#import "PTSearchEquipmentModelsReqMessage.h"
@implementation PTSearchEquipmentModelsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"categoryId": @"category_id",@"brandId": @"brand_id",@"query": @"query",};
}
@end
