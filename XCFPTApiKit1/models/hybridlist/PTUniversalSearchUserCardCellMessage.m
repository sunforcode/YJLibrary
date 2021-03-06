// apic_version = 0.6.1
#import "PTUniversalSearchUserCardCellMessage.h"
@implementation PTUniversalSearchUserCardCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"user": @"user",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",};
}
@end
