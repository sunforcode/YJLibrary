// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  菜谱评价的答案
*/
@interface PTRecipeAppraisalAnswerMessage : PTModel
@property (nonatomic, assign) int32_t appraisalAnswer;
@property (nonatomic, copy) NSString *appraisalAnswerText;
@end
NS_ASSUME_NONNULL_END
