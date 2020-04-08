// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSendPhoneLoginVerificationCodeV2ReqMessage : PTModel
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *userIdent;
@property (nonatomic, copy) NSString *countryCode;
@end
NS_ASSUME_NONNULL_END
