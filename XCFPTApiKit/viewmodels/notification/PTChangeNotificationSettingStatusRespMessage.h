// apic_version = 0.5.5
#import "PTModel.h"
#import "PTNotificationSettingStatusMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  更改通知开关状态的响应
*/
@interface PTChangeNotificationSettingStatusRespMessage : PTModel
@property (nonatomic, strong) PTNotificationSettingStatusMessage *notificationSettingStatus;
@end
NS_ASSUME_NONNULL_END
