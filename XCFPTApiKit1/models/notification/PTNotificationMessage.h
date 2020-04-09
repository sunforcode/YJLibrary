// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCookRecipeNotificationMessage.h"
#import "PTCookCourseNotificationMessage.h"
#import "PTCollectRecipeNotificationMessage.h"
#import "PTDiggDishNotificationMessage.h"
#import "PTDiggRecipeQuestionNotificationMessage.h"
#import "PTDiggMpQuestionNotificationMessage.h"
#import "PTAskRecipeQuestionNotificationMessage.h"
#import "PTCommentDishNotificationMessage.h"
#import "PTAskMpQuestionNotificationMessage.h"
#import "PTReplyRecipeQuestionNotificationMessage.h"
#import "PTReplyDishCommentNotificationMessage.h"
#import "PTReplyMpQuestionNotificationMessage.h"
#import "PTFollowUserNotificationMessage.h"
#import "PTOfficialNotificationMessage.h"
#import "PTReplyShopReviewNotificationMessage.h"
#import "PTCommentReviewNotificationMessage.h"
#import "PTDiggReviewNotificationMessage.h"
#import "PTDiggRecipeQuestionAnswerNotificationMessage.h"
#import "PTReplyRecipeQuestionV2NotificationMessage.h"
#import "PTReplyRecipeQuestionAnswerNotificationMessage.h"
#import "PTCollectCourseNotificationMessage.h"
#import "PTDiggEssayNotificationMessage.h"
#import "PTCommentEssayNotificationMessage.h"
#import "PTCollectEssayNotificationMessage.h"
#import "PTPublishEssayNotificationMessage.h"
#import "PTDiggQuestionNotificationMessage.h"
#import "PTDiggQuestionAnswerNotificationMessage.h"
#import "PTReplyQuestionNotificationMessage.h"
#import "PTReplyQuestionAnswerNotificationMessage.h"
#import "PTAskQuestionNotificationMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  通知对象
*/
@interface PTNotificationMessage : PTModel
@property (nonatomic, strong) PTCookRecipeNotificationMessage *cookRecipe;
@property (nonatomic, strong) PTCookCourseNotificationMessage *cookCourse;
@property (nonatomic, strong) PTCollectRecipeNotificationMessage *collectRecipe;
@property (nonatomic, strong) PTDiggDishNotificationMessage *diggDish;
@property (nonatomic, strong) PTDiggRecipeQuestionNotificationMessage *diggRecipeQuestion;
@property (nonatomic, strong) PTDiggMpQuestionNotificationMessage *diggMpQuestion;
@property (nonatomic, strong) PTAskRecipeQuestionNotificationMessage *askRecipeQuestion;
@property (nonatomic, strong) PTCommentDishNotificationMessage *commentDish;
@property (nonatomic, strong) PTAskMpQuestionNotificationMessage *askMpQuestion;
@property (nonatomic, strong) PTReplyRecipeQuestionNotificationMessage *replyRecipeQuestion;
@property (nonatomic, strong) PTReplyDishCommentNotificationMessage *replyDishComment DEPRECATED_ATTRIBUTE;
@property (nonatomic, strong) PTReplyMpQuestionNotificationMessage *replyMpQuestion;
@property (nonatomic, strong) PTFollowUserNotificationMessage *followUser;
@property (nonatomic, strong) PTOfficialNotificationMessage *official;
@property (nonatomic, strong) PTReplyShopReviewNotificationMessage *replyShopReview;
@property (nonatomic, strong) PTCommentReviewNotificationMessage *commentReview;
@property (nonatomic, strong) PTDiggReviewNotificationMessage *diggReview;
@property (nonatomic, strong) PTDiggRecipeQuestionAnswerNotificationMessage *diggRecipeQuestionAnswer;
@property (nonatomic, strong) PTReplyRecipeQuestionV2NotificationMessage *replyRecipeQuestionV2;
@property (nonatomic, strong) PTReplyRecipeQuestionAnswerNotificationMessage *replyRecipeQuestionAnswer;
@property (nonatomic, strong) PTCollectCourseNotificationMessage *collectCourse;
@property (nonatomic, strong) PTDiggEssayNotificationMessage *diggEssay;
@property (nonatomic, strong) PTCommentEssayNotificationMessage *commentEssay;
@property (nonatomic, strong) PTCollectEssayNotificationMessage *collectEssay;
@property (nonatomic, strong) PTPublishEssayNotificationMessage *publishEssay;
@property (nonatomic, strong) PTDiggQuestionNotificationMessage *diggQuestion;
@property (nonatomic, strong) PTDiggQuestionAnswerNotificationMessage *diggQuestionAnswer;
@property (nonatomic, strong) PTReplyQuestionNotificationMessage *replyQuestion;
@property (nonatomic, strong) PTReplyQuestionAnswerNotificationMessage *replyQuestionAnswer;
@property (nonatomic, strong) PTAskQuestionNotificationMessage *askQuestion;
@end
NS_ASSUME_NONNULL_END
