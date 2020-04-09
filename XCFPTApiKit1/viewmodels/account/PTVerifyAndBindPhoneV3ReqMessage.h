// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTVerifyAndBindPhoneV3ReqMessage : PTModel
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *verificationCode;
@property (nonatomic, copy) NSString *countryCode;
@end
NS_ASSUME_NONNULL_END
