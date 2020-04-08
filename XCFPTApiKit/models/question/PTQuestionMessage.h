// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
#import "PTQuestionAnswerMessage.h"
#import "PTQuestionTargetMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTQuestionMessage : PTModel
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) int32_t nDiggs;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, assign) BOOL diggedByMe;
@property (nonatomic, strong) NSArray<PTQuestionAnswerMessage *> *answers;
@property (nonatomic, assign) int32_t nAnswers;
@property (nonatomic, strong) PTQuestionTargetMessage *target;
@end
NS_ASSUME_NONNULL_END
