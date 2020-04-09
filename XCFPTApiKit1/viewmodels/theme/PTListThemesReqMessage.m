// apic_version = 0.6.1
#import "PTListThemesReqMessage.h"
@implementation PTListThemesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",};
}
@end
