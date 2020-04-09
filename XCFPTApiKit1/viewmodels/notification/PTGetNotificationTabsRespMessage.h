// apic_version = 0.6.1
#import "PTModel.h"
#import "PTNotificationTabMessage.h"
#import "PTNotificationMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通知tab请求的响应对象
*/
@interface PTGetNotificationTabsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTNotificationTabMessage *> *notificationTabs;
@property (nonatomic, strong) PTNotificationMessage *lastOfficialNotification;
@end
NS_ASSUME_NONNULL_END
