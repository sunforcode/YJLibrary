// apic_version = 0.6.1
#import "PTGetIsDeviceAgreeAgreementRespMessage.h"
@implementation PTGetIsDeviceAgreeAgreementRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"isAgree": @"is_agree",@"agreementStyle": @"agreement_style",};
}
@end
