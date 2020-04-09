// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCreateViaWechatWithPhoneBindingReqMessage : PTModel
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *verificationCode;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, assign) BOOL skipPhoneBinding;
@end
NS_ASSUME_NONNULL_END
