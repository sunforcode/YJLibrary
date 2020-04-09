// apic_version = 0.6.1
#import "PTTextIconMessage.h"
@implementation PTTextIconMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"url": @"url",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",};
}
@end
