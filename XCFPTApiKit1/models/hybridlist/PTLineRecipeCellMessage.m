// apic_version = 0.6.1
#import "PTLineRecipeCellMessage.h"
@implementation PTLineRecipeCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipe": @"recipe",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",};
}
@end
