// apic_version = 0.5.5
#import "PTSlotADInfoMessage.h"
@implementation PTSlotADInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"slotName": @"slot_name",@"adInfo": @"ad_info",};
}
@end
