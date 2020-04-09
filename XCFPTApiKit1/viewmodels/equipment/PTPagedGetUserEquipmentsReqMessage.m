// apic_version = 0.6.1
#import "PTPagedGetUserEquipmentsReqMessage.h"
@implementation PTPagedGetUserEquipmentsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",};
}
@end
