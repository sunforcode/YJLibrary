// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通知tab对象
*/
@interface PTNotificationTabMessage : PTModel
@property (nonatomic, copy) NSString *notificationTabId;
@property (nonatomic, copy) NSString *name;
/**
  tab 的图标url
*/
@property (nonatomic, strong) PTPictureDictMessage *icon;
@property (nonatomic, assign) int32_t nUnreadNotifications;
/**
  这个tab是否拥有设置按钮
*/
@property (nonatomic, assign) BOOL hasSettingButton;
@end
NS_ASSUME_NONNULL_END
