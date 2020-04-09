// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAccountMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaWeappRespMessage : PTModel
@property (nonatomic, strong) PTAccountMessage *account;
@property (nonatomic, assign) BOOL loginSuccess;
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, assign) BOOL canSkipPhoneBinding;
@property (nonatomic, copy) NSString *unionid;
@property (nonatomic, copy) NSString *openid;
@end
NS_ASSUME_NONNULL_END
