// apic_version = 0.5.5
#import "PTCreateViaWeappWithPhoneBindingReqMessage.h"
@implementation PTCreateViaWeappWithPhoneBindingReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"phoneEncryptedData": @"phone_encrypted_data",@"phoneIv": @"phone_iv",@"authKey": @"auth_key",@"skipPhoneBinding": @"skip_phone_binding",@"weappSrc": @"weapp_src",@"infoEncryptedData": @"info_encrypted_data",@"infoIv": @"info_iv",};
}
@end
