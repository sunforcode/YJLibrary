// apic_version = 0.6.1
#import "PTBannerMessage.h"
@implementation PTBannerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"image": @"image",@"url": @"url",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",@"tracking": @"tracking",};
}
@end
