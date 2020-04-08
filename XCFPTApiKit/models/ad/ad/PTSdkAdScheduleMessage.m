// apic_version = 0.5.5
#import "PTSdkAdScheduleMessage.h"
@implementation PTSdkAdScheduleMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"sdkAd" : [PTSdkAdMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"slotName": @"slot_name",@"sdkAd": @"sdk_ad",};
}
@end
