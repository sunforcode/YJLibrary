// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTRecipeQuestionV2Message.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  点赞菜谱留言回复
*/
@interface PTDiggRecipeQuestionAnswerNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTRecipeQuestionAnswerV2Message *answer;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTRecipeQuestionV2Message *question;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
