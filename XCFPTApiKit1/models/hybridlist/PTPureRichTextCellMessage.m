// apic_version = 0.6.1
#import "PTPureRichTextCellMessage.h"
@implementation PTPureRichTextCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"identification": @"identification",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"title3rd": @"title_3rd",@"title4th": @"title_4th",@"image": @"image",@"url": @"url",@"label": @"label",@"width": @"width",@"height": @"height",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",@"tracking": @"tracking",};
}
@end
