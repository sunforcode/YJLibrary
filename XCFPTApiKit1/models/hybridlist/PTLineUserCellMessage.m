// apic_version = 0.6.1
#import "PTLineUserCellMessage.h"
@implementation PTLineUserCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],@"followClickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"user": @"user",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",@"followClickSensorEvents": @"follow_click_sensor_events",};
}
@end
