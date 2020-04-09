// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通知请求的请求对象
*/
@interface PTGetNotificationsReqMessage : PTModel
@property (nonatomic, copy) NSString *tabId;
/**
  翻页用的游标， 第一次不传，翻页的时候需要返回服务器给的cursor的值
*/
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
