// apic_version = 0.5.5
#import "PTSensorEventMessage.h"
@implementation PTSensorEventMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"eventName": @"event_name",@"properties": @"properties",};
}
@end
