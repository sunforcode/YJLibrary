// apic_version = 0.5.5
#import "PTRichTextGoodsCellMessage.h"
@implementation PTRichTextGoodsCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"impressionSensorEvents" : [PTSensorEventMessage class],@"clickSensorEvents" : [PTSensorEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"image": @"image",@"url": @"url",@"goods": @"goods",@"impressionSensorEvents": @"impression_sensor_events",@"clickSensorEvents": @"click_sensor_events",};
}
@end
