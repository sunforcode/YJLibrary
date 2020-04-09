// apic_version = 0.6.1
#import "PTListThemesV2ReqMessage.h"
@implementation PTListThemesV2ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"timezone": @"timezone",};
}
@end
