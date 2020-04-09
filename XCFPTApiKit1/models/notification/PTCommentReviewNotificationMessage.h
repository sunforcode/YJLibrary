// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTReviewMessage.h"
#import "PTCommentMessage.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  评论商品评价
*/
@interface PTCommentReviewNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTReviewMessage *review;
@property (nonatomic, strong) PTCommentMessage *comment;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
