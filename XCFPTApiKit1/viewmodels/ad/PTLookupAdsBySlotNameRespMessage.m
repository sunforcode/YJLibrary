// apic_version = 0.6.1
#import "PTLookupAdsBySlotNameRespMessage.h"
@implementation PTLookupAdsBySlotNameRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"ads" : [PTSlotADInfoMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ads": @"ads",};
}
@end
