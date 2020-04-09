// apic_version = 0.6.1
#import "PTPagedUserTargetsRespMessage.h"
@implementation PTPagedUserTargetsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"targets" : [PTTargetMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"targets": @"targets",@"cursor": @"cursor",};
}
@end
