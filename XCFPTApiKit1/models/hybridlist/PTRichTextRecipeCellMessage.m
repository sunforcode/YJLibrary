// apic_version = 0.6.1
#import "PTRichTextRecipeCellMessage.h"
@implementation PTRichTextRecipeCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"collectSensorEvents" : [PTSensorEventMessage class],@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"identification": @"identification",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"title3rd": @"title_3rd",@"title4th": @"title_4th",@"image": @"image",@"url": @"url",@"label": @"label",@"width": @"width",@"height": @"height",@"recipe": @"recipe",@"collectSensorEvents": @"collect_sensor_events",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",@"tracking": @"tracking",};
}
@end
