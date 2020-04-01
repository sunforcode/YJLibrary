// apic_version = 0.5.5
#import "PTLookupAdsBySlotNameRespMessage.h"
@implementation PTLookupAdsBySlotNameRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"ads" : [PTSlotADInfoMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ads": @"ads",};
}
@end
