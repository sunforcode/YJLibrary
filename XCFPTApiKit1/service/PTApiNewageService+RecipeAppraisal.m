// apic_version = 0.6.1
#import "PTApiNewageService+RecipeAppraisal.h"
@implementation PTApiNewageService (RecipeAppraisal)
- (RACSignal *)getRecipeAppraisalQuestionWithReqParameters:(PTGetRecipeAppraisalQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/appraisal/question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecipeAppraisalQuestionRespMessage.class
                         requestName:@"GetRecipeAppraisalQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecipeAppraisalQuestionWithReqParameters:(PTGetRecipeAppraisalQuestionReqMessage *)reqParameters {
    return [self getRecipeAppraisalQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)setRecipeAppraisalAnswerWithReqParameters:(PTSetRecipeAppraisalAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/appraisal/set_answer.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSetRecipeAppraisalAnswerRespMessage.class
                         requestName:@"SetRecipeAppraisalAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)setRecipeAppraisalAnswerWithReqParameters:(PTSetRecipeAppraisalAnswerReqMessage *)reqParameters {
    return [self setRecipeAppraisalAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
