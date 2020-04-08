// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTRecipeQuestionV2Message.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  回复 菜谱留言 的回复
*/
@interface PTReplyRecipeQuestionAnswerNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTRecipeQuestionAnswerV2Message *senderAnswer;
@property (nonatomic, strong) PTRecipeQuestionAnswerV2Message *receiverAnswer;
@property (nonatomic, strong) PTRecipeQuestionV2Message *question;
@property (nonatomic, assign) BOOL isNotifiedByAt;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
