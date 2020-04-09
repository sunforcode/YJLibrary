// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  回答问卷请求
*/
@interface PTAnswerQuestionnaireReqMessage : PTModel
@property (nonatomic, copy) NSString *questionnaireId;
@property (nonatomic, copy) NSString *questionId;
@property (nonatomic, copy) NSString *answerId;
@property (nonatomic, copy) NSString *recipeId;
@end
NS_ASSUME_NONNULL_END
