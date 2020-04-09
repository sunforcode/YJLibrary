// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTRecipeQuestionAnswerMessage.h"
#import "PTRecipeMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeQuestionMessage : PTModel
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, copy) NSString *updateTime;
@property (nonatomic, assign) BOOL diggedByMe;
@property (nonatomic, strong) PTRecipeQuestionAnswerMessage *answer;
@property (nonatomic, strong) PTRecipeMessage *recipe;
@end
NS_ASSUME_NONNULL_END
