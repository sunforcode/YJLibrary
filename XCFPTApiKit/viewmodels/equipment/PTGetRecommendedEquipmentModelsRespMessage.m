// apic_version = 0.5.5
#import "PTGetRecommendedEquipmentModelsRespMessage.h"
@implementation PTGetRecommendedEquipmentModelsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"models" : [PTEquipmentModelMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"models": @"models",};
}
@end
