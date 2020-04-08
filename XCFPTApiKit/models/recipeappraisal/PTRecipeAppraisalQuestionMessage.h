// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeAppraisalAnswerMessage.h"
#import "PTRecipeAppraisalTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
/**
  菜谱评价的问题
*/
@interface PTRecipeAppraisalQuestionMessage : PTModel
@property (nonatomic, copy) NSString *recipeAppraisalQuestionText;
/**
  问题可以拥有的答案选项
*/
@property (nonatomic, strong) NSArray<PTRecipeAppraisalAnswerMessage *> *recipeAppraisalAnswer;
@property (nonatomic, assign) int32_t stage;
@property (nonatomic, assign) PTRecipeAppraisalTypeEnum recipeAppraisalTypeId;
@end
NS_ASSUME_NONNULL_END
