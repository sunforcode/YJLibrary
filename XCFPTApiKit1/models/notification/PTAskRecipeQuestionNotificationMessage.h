// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
#import "PTRecipeQuestionMessage.h"
#import "PTNotificationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  菜谱留言
*/
@interface PTAskRecipeQuestionNotificationMessage : PTModel
@property (nonatomic, copy) NSString *notificationId;
@property (nonatomic, strong) PTUserMessage *sender;
@property (nonatomic, strong) PTUserMessage *receiver;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTRecipeQuestionMessage *recipeQuestion;
@property (nonatomic, assign) BOOL isNotifiedByAt;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) BOOL isValid;
@property (nonatomic, assign) PTNotificationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
