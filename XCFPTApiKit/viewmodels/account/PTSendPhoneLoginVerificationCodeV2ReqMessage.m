// apic_version = 0.5.5
#import "PTSendPhoneLoginVerificationCodeV2ReqMessage.h"
@implementation PTSendPhoneLoginVerificationCodeV2ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"phoneNumber": @"phone_number",@"userIdent": @"user_ident",@"countryCode": @"country_code",};
}
@end
