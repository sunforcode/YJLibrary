// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取菜谱评价的问题
*/
@interface PTGetRecipeAppraisalQuestionReqMessage : PTModel
@property (nonatomic, copy) NSString *recipeId;
@property (nonatomic, assign) BOOL isLabelQuestion;
@end
NS_ASSUME_NONNULL_END
