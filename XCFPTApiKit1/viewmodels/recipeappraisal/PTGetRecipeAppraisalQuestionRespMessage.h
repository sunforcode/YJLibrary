// apic_version = 0.6.1
#import "PTModel.h"
#import "PTRecipeAppraisalQuestionMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  菜谱评价的问题信息
*/
@interface PTGetRecipeAppraisalQuestionRespMessage : PTModel
@property (nonatomic, strong) PTRecipeAppraisalQuestionMessage *recipeAppraisalQuestion;
@end
NS_ASSUME_NONNULL_END
