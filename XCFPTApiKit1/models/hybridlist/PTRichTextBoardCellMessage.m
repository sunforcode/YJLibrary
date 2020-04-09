// apic_version = 0.6.1
#import "PTRichTextBoardCellMessage.h"
@implementation PTRichTextBoardCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"url": @"url",@"image": @"image",@"board": @"board",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",};
}
@end
