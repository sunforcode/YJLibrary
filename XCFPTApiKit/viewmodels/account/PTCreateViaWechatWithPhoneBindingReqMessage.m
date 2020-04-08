// apic_version = 0.5.5
#import "PTCreateViaWechatWithPhoneBindingReqMessage.h"
@implementation PTCreateViaWechatWithPhoneBindingReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"phoneNumber": @"phone_number",@"verificationCode": @"verification_code",@"countryCode": @"country_code",@"authKey": @"auth_key",@"skipPhoneBinding": @"skip_phone_binding",};
}
@end
