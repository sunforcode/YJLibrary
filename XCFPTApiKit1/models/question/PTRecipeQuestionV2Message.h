// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTRecipeQuestionAnswerV2Message.h"
#import "PTRecipeMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeQuestionV2Message : PTModel
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, assign) BOOL diggedByMe;
@property (nonatomic, strong) NSArray<PTRecipeQuestionAnswerV2Message *> *answers;
@property (nonatomic, assign) int32_t nAnswers;
@property (nonatomic, strong) PTRecipeMessage *recipe;
@end
NS_ASSUME_NONNULL_END
