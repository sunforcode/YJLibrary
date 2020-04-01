// apic_version = 0.5.5
#import "PTRichTextCourseCellMessage.h"
@implementation PTRichTextCourseCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],@"collectSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"identification": @"identification",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"title2ndPrefix": @"title_2nd_prefix",@"title3rd": @"title_3rd",@"title3rdPrefix": @"title_3rd_prefix",@"image": @"image",@"url": @"url",@"width": @"width",@"height": @"height",@"course": @"course",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",@"collectSensorEvents": @"collect_sensor_events",};
}
@end
