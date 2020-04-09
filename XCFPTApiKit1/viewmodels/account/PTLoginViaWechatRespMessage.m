// apic_version = 0.6.1
#import "PTLoginViaWechatRespMessage.h"
@implementation PTLoginViaWechatRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"account": @"account",@"loginSuccess": @"login_success",@"authKey": @"auth_key",@"canSkipPhoneBinding": @"can_skip_phone_binding",};
}
@end
