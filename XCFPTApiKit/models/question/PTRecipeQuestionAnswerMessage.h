// apic_version = 0.5.5
#import "PTModel.h"
#import "PTUserMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRecipeQuestionAnswerMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *createTime;
@property (nonatomic, strong) PTUserMessage *author;
@property (nonatomic, copy) NSString *answerId;
@end
NS_ASSUME_NONNULL_END
