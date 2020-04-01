// apic_version = 0.5.5
#import "PTApiNewageService+Questionnaire.h"
@implementation PTApiNewageService (Questionnaire)
- (RACSignal *)getQuestionnaireWithReqParameters:(PTGetQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"questionnaire/get_questionnaire.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetQuestionnaireRespMessage.class
                         requestName:@"GetQuestionnaire"
                           apiConfig:apiConfig];
}
- (RACSignal *)getQuestionnaireWithReqParameters:(PTGetQuestionnaireReqMessage *)reqParameters {
    return [self getQuestionnaireWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)answerQuestionnaireWithReqParameters:(PTAnswerQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"questionnaire/answer_questionnaire.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTAnswerQuestionnaireRespMessage.class
                         requestName:@"AnswerQuestionnaire"
                           apiConfig:apiConfig];
}
- (RACSignal *)answerQuestionnaireWithReqParameters:(PTAnswerQuestionnaireReqMessage *)reqParameters {
    return [self answerQuestionnaireWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)closeQuestionnaireWithReqParameters:(PTCloseQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"questionnaire/close_questionnaire.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCloseQuestionnaireRespMessage.class
                         requestName:@"CloseQuestionnaire"
                           apiConfig:apiConfig];
}
- (RACSignal *)closeQuestionnaireWithReqParameters:(PTCloseQuestionnaireReqMessage *)reqParameters {
    return [self closeQuestionnaireWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getFreshWelfareQuestionnaireWithReqParameters:(PTGetFreshWelfareQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"questionnaire/get_fresh_welfare_questionnaire.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetFreshWelfareQuestionnaireRespMessage.class
                         requestName:@"GetFreshWelfareQuestionnaire"
                           apiConfig:apiConfig];
}
- (RACSignal *)getFreshWelfareQuestionnaireWithReqParameters:(PTGetFreshWelfareQuestionnaireReqMessage *)reqParameters {
    return [self getFreshWelfareQuestionnaireWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)answerFreshWelfareQuestionnaireWithReqParameters:(PTAnswerFreshWelfareQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"questionnaire/answer_fresh_welfare_questionnaire.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTAnswerFreshWelfareQuestionnaireRespMessage.class
                         requestName:@"AnswerFreshWelfareQuestionnaire"
                           apiConfig:apiConfig];
}
- (RACSignal *)answerFreshWelfareQuestionnaireWithReqParameters:(PTAnswerFreshWelfareQuestionnaireReqMessage *)reqParameters {
    return [self answerFreshWelfareQuestionnaireWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
