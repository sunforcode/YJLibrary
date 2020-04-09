// apic_version = 0.6.1
#import "PTModel.h"
#import "PTNotificationMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通知请求的响应对象
*/
@interface PTGetNotificationsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTNotificationMessage *> *notifications;
/**
  翻页的游标
*/
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
