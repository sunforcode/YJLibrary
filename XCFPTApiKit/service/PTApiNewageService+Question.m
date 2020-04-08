// apic_version = 0.5.5
#import "PTApiNewageService+Question.h"
@implementation PTApiNewageService (Question)
- (RACSignal *)recipeAskQuestionWithReqParameters:(PTRecipeAskQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipes/%@/ask_question.json", reqParameters.recipeId];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTRecipeAskQuestionRespMessage.class
                         requestName:@"RecipeAskQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)recipeAskQuestionWithReqParameters:(PTRecipeAskQuestionReqMessage *)reqParameters {
    return [self recipeAskQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedRecipeQuestionsWithReqParameters:(PTPagedRecipeQuestionsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/paged_questions_order_by_diggs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedRecipeQuestionsRespMessage.class
                         requestName:@"PagedRecipeQuestions"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedRecipeQuestionsWithReqParameters:(PTPagedRecipeQuestionsReqMessage *)reqParameters {
    return [self pagedRecipeQuestionsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedRecipeQuestionsV2WithReqParameters:(PTPagedRecipeQuestionsV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/paged_questions.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedRecipeQuestionsV2RespMessage.class
                         requestName:@"PagedRecipeQuestionsV2"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedRecipeQuestionsV2WithReqParameters:(PTPagedRecipeQuestionsV2ReqMessage *)reqParameters {
    return [self pagedRecipeQuestionsV2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedRecipeQuestionAnswersWithReqParameters:(PTPagedRecipeQuestionAnswersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/paged_question_answers.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedRecipeQuestionAnswersRespMessage.class
                         requestName:@"PagedRecipeQuestionAnswers"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedRecipeQuestionAnswersWithReqParameters:(PTPagedRecipeQuestionAnswersReqMessage *)reqParameters {
    return [self pagedRecipeQuestionAnswersWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)diggRecipeQuestionAnswerWithReqParameters:(PTDiggRecipeQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/question_answer/digg.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDiggRecipeQuestionAnswerRespMessage.class
                         requestName:@"DiggRecipeQuestionAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)diggRecipeQuestionAnswerWithReqParameters:(PTDiggRecipeQuestionAnswerReqMessage *)reqParameters {
    return [self diggRecipeQuestionAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)undiggRecipeQuestionAnswerWithReqParameters:(PTUndiggRecipeQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/question_answer/undigg.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUndiggRecipeQuestionAnswerRespMessage.class
                         requestName:@"UndiggRecipeQuestionAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)undiggRecipeQuestionAnswerWithReqParameters:(PTUndiggRecipeQuestionAnswerReqMessage *)reqParameters {
    return [self undiggRecipeQuestionAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)answerRecipeQuestionV2WithReqParameters:(PTAnswerRecipeQuestionV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/answer_question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTAnswerRecipeQuestionV2RespMessage.class
                         requestName:@"AnswerRecipeQuestionV2"
                           apiConfig:apiConfig];
}
- (RACSignal *)answerRecipeQuestionV2WithReqParameters:(PTAnswerRecipeQuestionV2ReqMessage *)reqParameters {
    return [self answerRecipeQuestionV2WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)deleteRecipeAnswerWithReqParameters:(PTDeleteRecipeAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/delete_question_answer.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDeleteRecipeAnswerRespMessage.class
                         requestName:@"DeleteRecipeAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)deleteRecipeAnswerWithReqParameters:(PTDeleteRecipeAnswerReqMessage *)reqParameters {
    return [self deleteRecipeAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)reportRecipeAnswerWithReqParameters:(PTReportRecipeAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/report_question_answer.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTReportRecipeAnswerRespMessage.class
                         requestName:@"ReportRecipeAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)reportRecipeAnswerWithReqParameters:(PTReportRecipeAnswerReqMessage *)reqParameters {
    return [self reportRecipeAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)askQuestionWithReqParameters:(PTAskQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/ask_question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTAskQuestionRespMessage.class
                         requestName:@"AskQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)askQuestionWithReqParameters:(PTAskQuestionReqMessage *)reqParameters {
    return [self askQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedQuestionsWithReqParameters:(PTPagedQuestionsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/paged_questions_order_by_diggs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedQuestionsRespMessage.class
                         requestName:@"PagedQuestions"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedQuestionsWithReqParameters:(PTPagedQuestionsReqMessage *)reqParameters {
    return [self pagedQuestionsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedQuestionAnswersWithReqParameters:(PTPagedQuestionAnswersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/paged_question_answers.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedQuestionAnswersRespMessage.class
                         requestName:@"PagedQuestionAnswers"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedQuestionAnswersWithReqParameters:(PTPagedQuestionAnswersReqMessage *)reqParameters {
    return [self pagedQuestionAnswersWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)diggQuestionAnswerWithReqParameters:(PTDiggQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question_answer/digg.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDiggQuestionAnswerRespMessage.class
                         requestName:@"DiggQuestionAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)diggQuestionAnswerWithReqParameters:(PTDiggQuestionAnswerReqMessage *)reqParameters {
    return [self diggQuestionAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)undiggQuestionAnswerWithReqParameters:(PTUndiggQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question_answer/undigg.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUndiggQuestionAnswerRespMessage.class
                         requestName:@"UndiggQuestionAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)undiggQuestionAnswerWithReqParameters:(PTUndiggQuestionAnswerReqMessage *)reqParameters {
    return [self undiggQuestionAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)diggQuestionWithReqParameters:(PTDiggQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/digg.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDiggQuestionRespMessage.class
                         requestName:@"DiggQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)diggQuestionWithReqParameters:(PTDiggQuestionReqMessage *)reqParameters {
    return [self diggQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)undiggQuestionWithReqParameters:(PTUndiggQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/undigg.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUndiggQuestionRespMessage.class
                         requestName:@"UndiggQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)undiggQuestionWithReqParameters:(PTUndiggQuestionReqMessage *)reqParameters {
    return [self undiggQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)answerQuestionWithReqParameters:(PTAnswerQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/answer_question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTAnswerQuestionRespMessage.class
                         requestName:@"AnswerQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)answerQuestionWithReqParameters:(PTAnswerQuestionReqMessage *)reqParameters {
    return [self answerQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)deleteAnswerWithReqParameters:(PTDeleteAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/delete_question_answer.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDeleteAnswerRespMessage.class
                         requestName:@"DeleteAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)deleteAnswerWithReqParameters:(PTDeleteAnswerReqMessage *)reqParameters {
    return [self deleteAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)deleteQuestionWithReqParameters:(PTDeleteQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/delete_question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDeleteQuestionRespMessage.class
                         requestName:@"DeleteQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)deleteQuestionWithReqParameters:(PTDeleteQuestionReqMessage *)reqParameters {
    return [self deleteQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)reportAnswerWithReqParameters:(PTReportAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/report_question_answer.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTReportAnswerRespMessage.class
                         requestName:@"ReportAnswer"
                           apiConfig:apiConfig];
}
- (RACSignal *)reportAnswerWithReqParameters:(PTReportAnswerReqMessage *)reqParameters {
    return [self reportAnswerWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)reportQuestionWithReqParameters:(PTReportQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"question/report_question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTReportQuestionRespMessage.class
                         requestName:@"ReportQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)reportQuestionWithReqParameters:(PTReportQuestionReqMessage *)reqParameters {
    return [self reportQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)searchQuestionWithReqParameters:(PTSearchQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"search/similar_recipe_question.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSearchQuestionRespMessage.class
                         requestName:@"SearchQuestion"
                           apiConfig:apiConfig];
}
- (RACSignal *)searchQuestionWithReqParameters:(PTSearchQuestionReqMessage *)reqParameters {
    return [self searchQuestionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
