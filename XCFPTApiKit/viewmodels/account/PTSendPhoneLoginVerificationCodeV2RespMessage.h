// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSendPhoneLoginVerificationCodeV2RespMessage : PTModel
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *phoneNumber;
@end
NS_ASSUME_NONNULL_END
