// apic_version = 0.6.1
#import "PTVerifyAndBindPhoneV3ReqMessage.h"
@implementation PTVerifyAndBindPhoneV3ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"phoneNumber": @"phone_number",@"verificationCode": @"verification_code",@"countryCode": @"country_code",};
}
@end
