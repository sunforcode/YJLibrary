// apic_version = 0.5.5
#import "PTUserMobilePhoneMessage.h"
@implementation PTUserMobilePhoneMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"countryCode": @"country_code",@"phoneNumber": @"phone_number",};
}
@end
