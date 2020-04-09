// apic_version = 0.6.1
#import "PTLoginViaWeappRespMessage.h"
@implementation PTLoginViaWeappRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"account": @"account",@"loginSuccess": @"login_success",@"authKey": @"auth_key",@"canSkipPhoneBinding": @"can_skip_phone_binding",@"unionid": @"unionid",@"openid": @"openid",};
}
@end
