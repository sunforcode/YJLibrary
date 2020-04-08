// apic_version = 0.5.5
#import "PTGetRecommendedEquipmentModelsReqMessage.h"
@implementation PTGetRecommendedEquipmentModelsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"categoryId": @"category_id",@"brandId": @"brand_id",};
}
@end
