// apic_version = 0.5.5
#import "PTBindUserEquipmentReqMessage.h"
@implementation PTBindUserEquipmentReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"categoryId": @"category_id",@"brandId": @"brand_id",@"modelName": @"model_name",};
}
@end
