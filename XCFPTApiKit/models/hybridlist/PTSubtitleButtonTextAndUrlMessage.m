// apic_version = 0.5.5
#import "PTSubtitleButtonTextAndUrlMessage.h"
@implementation PTSubtitleButtonTextAndUrlMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"url": @"url",@"clickSensorEvents": @"click_sensor_events",};
}
@end
