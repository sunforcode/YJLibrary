// apic_version = 0.5.5
#import "PTModel.h"
#import "PTNotificationTabMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  tab 标记已读响应
*/
@interface PTMarkTabAsReadRespMessage : PTModel
@property (nonatomic, strong) PTNotificationTabMessage *notificationTab;
@end
NS_ASSUME_NONNULL_END
