// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  发送过来的答案结构
*/
@interface PTQuestionnaireQuestionAnswerMessage : PTModel
@property (nonatomic, assign) int32_t questionId;
@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *answer;
@end
NS_ASSUME_NONNULL_END
