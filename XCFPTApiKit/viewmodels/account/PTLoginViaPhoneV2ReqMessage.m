// apic_version = 0.5.5
#import "PTLoginViaPhoneV2ReqMessage.h"
@implementation PTLoginViaPhoneV2ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"phoneNumber": @"phone_number",@"verificationCode": @"verification_code",@"countryCode": @"country_code",};
}
@end
