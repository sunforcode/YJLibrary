// apic_version = 0.5.5
#import "PTRichTextDishCellMessage.h"
@implementation PTRichTextDishCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"diggSensorEvents" : [PTSensorEventMessage class],@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"identification": @"identification",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"title3rd": @"title_3rd",@"title4th": @"title_4th",@"image": @"image",@"url": @"url",@"label": @"label",@"width": @"width",@"height": @"height",@"dish": @"dish",@"diggSensorEvents": @"digg_sensor_events",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",@"tracking": @"tracking",};
}
@end
