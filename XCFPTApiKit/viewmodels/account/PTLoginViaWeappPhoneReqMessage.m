// apic_version = 0.5.5
#import "PTLoginViaWeappPhoneReqMessage.h"
@implementation PTLoginViaWeappPhoneReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"authKey": @"auth_key",@"phoneEncryptedData": @"phone_encrypted_data",@"phoneIv": @"phone_iv",@"weappSrc": @"weapp_src",};
}
@end
