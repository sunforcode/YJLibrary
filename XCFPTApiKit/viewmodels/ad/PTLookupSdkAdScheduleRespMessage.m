// apic_version = 0.5.5
#import "PTLookupSdkAdScheduleRespMessage.h"
@implementation PTLookupSdkAdScheduleRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"schedule" : [PTSdkAdScheduleMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"schedule": @"schedule",};
}
@end
