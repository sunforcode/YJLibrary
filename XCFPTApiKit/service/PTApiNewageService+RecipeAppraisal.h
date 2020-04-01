// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTGetRecipeAppraisalQuestionReqMessage.h"
#import "PTSetRecipeAppraisalAnswerReqMessage.h"
#import "PTGetRecipeAppraisalQuestionRespMessage.h"
#import "PTSetRecipeAppraisalAnswerRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (RecipeAppraisal)
/**
  获取用户对某个菜谱的评价问题
*/
- (RACSignal *)getRecipeAppraisalQuestionWithReqParameters:(PTGetRecipeAppraisalQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户对某个菜谱的评价问题
*/
- (RACSignal *)getRecipeAppraisalQuestionWithReqParameters:(PTGetRecipeAppraisalQuestionReqMessage *)reqParameters;
/**
  设置用户菜谱评价的答案
*/
- (RACSignal *)setRecipeAppraisalAnswerWithReqParameters:(PTSetRecipeAppraisalAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  设置用户菜谱评价的答案
*/
- (RACSignal *)setRecipeAppraisalAnswerWithReqParameters:(PTSetRecipeAppraisalAnswerReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
