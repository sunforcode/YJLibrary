// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTQuestionMessage.h"
#import "PTQuestionAnswerMessage.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  点赞问题的回复
*/
@interface PTDiggQuestionAnswerNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTQuestionMessage *question;
@property (nonatomic, strong) PTQuestionAnswerMessage *questionAnswer;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
