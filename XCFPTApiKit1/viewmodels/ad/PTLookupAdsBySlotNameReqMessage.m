// apic_version = 0.6.1
#import "PTLookupAdsBySlotNameReqMessage.h"
@implementation PTLookupAdsBySlotNameReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"imeiMd5": @"imei_md5",@"idfa": @"idfa",@"macMd5": @"mac_md5",@"osVersion": @"os_version",@"width": @"width",@"height": @"height",@"slotName": @"slot_name",@"oaid": @"oaid",@"network": @"network",};
}
@end
