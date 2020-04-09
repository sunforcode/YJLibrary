// apic_version = 0.6.1
#import "PTModel.h"
#import "PTNotificationSettingStatusMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取通知设置状态的响应
*/
@interface PTGetNotificationSettingStatusRespMessage : PTModel
@property (nonatomic, strong) PTNotificationSettingStatusMessage *notificationSettingStatus;
@end
NS_ASSUME_NONNULL_END
