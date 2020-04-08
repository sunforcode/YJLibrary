// apic_version = 0.5.5
#import "PTLoginViaWeappReqMessage.h"
@implementation PTLoginViaWeappReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"jsCode": @"js_code",@"weappSrc": @"weapp_src",};
}
@end
