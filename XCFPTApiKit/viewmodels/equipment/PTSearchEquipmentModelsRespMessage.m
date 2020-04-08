// apic_version = 0.5.5
#import "PTSearchEquipmentModelsRespMessage.h"
@implementation PTSearchEquipmentModelsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"models" : [PTEquipmentModelMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"models": @"models",};
}
@end
