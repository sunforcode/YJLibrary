// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTRecipeQuestionV2Message.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  回复菜谱留言
*/
@interface PTReplyRecipeQuestionV2NotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTRecipeQuestionV2Message *question;
@property (nonatomic, strong) PTRecipeQuestionAnswerV2Message *answer;
@property (nonatomic, assign) BOOL isNotifiedByAt;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
