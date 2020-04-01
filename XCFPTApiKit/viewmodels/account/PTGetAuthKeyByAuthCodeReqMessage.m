// apic_version = 0.5.5
#import "PTGetAuthKeyByAuthCodeReqMessage.h"
@implementation PTGetAuthKeyByAuthCodeReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"authCode": @"auth_code",@"provider": @"provider",};
}
@end
