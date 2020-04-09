// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAccountMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaDeviceRespMessage : PTModel
@property (nonatomic, strong) PTAccountMessage *account;
/**
  标识该账号只能在该设备使用(个人主页不同样式)
*/
@property (nonatomic, assign) BOOL isDeviceOnlyUser;
@end
NS_ASSUME_NONNULL_END
