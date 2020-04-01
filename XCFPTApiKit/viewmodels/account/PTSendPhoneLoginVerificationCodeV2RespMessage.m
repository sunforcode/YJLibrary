// apic_version = 0.5.5
#import "PTSendPhoneLoginVerificationCodeV2RespMessage.h"
@implementation PTSendPhoneLoginVerificationCodeV2RespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"serialNumber": @"serial_number",@"countryCode": @"country_code",@"phoneNumber": @"phone_number",};
}
@end
