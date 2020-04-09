// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  设置用户菜谱评价的答案
*/
@interface PTSetRecipeAppraisalAnswerReqMessage : PTModel
@property (nonatomic, copy) NSString *recipeId;
@property (nonatomic, assign) int32_t recipeAppraisalTypeId;
@property (nonatomic, assign) int32_t recipeAppraisalAnswer;
@property (nonatomic, assign) int32_t stage;
@end
NS_ASSUME_NONNULL_END
