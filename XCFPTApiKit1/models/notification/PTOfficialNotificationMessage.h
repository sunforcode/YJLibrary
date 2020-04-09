// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTOfficialNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *receiver;
/**
  通知的文本
*/
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
