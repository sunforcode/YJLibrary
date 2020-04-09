// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  tab 标记已读请求
*/
@interface PTMarkTabAsReadReqMessage : PTModel
@property (nonatomic, copy) NSString *tabId;
/**
  客户端展示的最新的id
*/
@property (nonatomic, copy) NSString *notificationId;
@end
NS_ASSUME_NONNULL_END
