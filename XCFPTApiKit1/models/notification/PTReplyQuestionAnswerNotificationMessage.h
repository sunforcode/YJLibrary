// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTQuestionAnswerMessage.h"
#import "PTQuestionAnswerMessage.h"
#import "PTQuestionMessage.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  回复某个问题下的回复
*/
@interface PTReplyQuestionAnswerNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTQuestionAnswerMessage *senderAnswer;
@property (nonatomic, strong) PTQuestionAnswerMessage *receiverAnswer;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) PTQuestionMessage *question;
@property (nonatomic, assign) BOOL isNotifiedByAt;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
