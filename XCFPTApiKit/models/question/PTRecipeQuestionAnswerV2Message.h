// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeQuestionAnswerV2Message : PTModel
@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, strong) PTUserMessage *author;
/**
  被回复的人
*/
@property (nonatomic, strong) PTUserMessage *answeredUser;
@property (nonatomic, assign) BOOL diggedByMe;
@end
NS_ASSUME_NONNULL_END
