// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAccountMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaPhoneV2RespMessage : PTModel
@property (nonatomic, strong) PTAccountMessage *account;
@end
NS_ASSUME_NONNULL_END
