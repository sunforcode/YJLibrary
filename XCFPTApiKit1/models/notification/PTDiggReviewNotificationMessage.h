// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTReviewMessage.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  点赞商品评价
*/
@interface PTDiggReviewNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTReviewMessage *review;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
