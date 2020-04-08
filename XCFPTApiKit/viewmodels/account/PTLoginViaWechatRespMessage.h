// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAccountMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaWechatRespMessage : PTModel
@property (nonatomic, strong) PTAccountMessage *account;
@property (nonatomic, assign) BOOL loginSuccess;
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, assign) BOOL canSkipPhoneBinding;
@end
NS_ASSUME_NONNULL_END
