// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAnswerRecipeQuestionV2ReqMessage : PTModel
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *text;
@end
NS_ASSUME_NONNULL_END
