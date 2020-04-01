// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTGetQuestionnaireReqMessage.h"
#import "PTAnswerQuestionnaireReqMessage.h"
#import "PTCloseQuestionnaireReqMessage.h"
#import "PTGetFreshWelfareQuestionnaireReqMessage.h"
#import "PTAnswerFreshWelfareQuestionnaireReqMessage.h"
#import "PTGetQuestionnaireRespMessage.h"
#import "PTAnswerQuestionnaireRespMessage.h"
#import "PTCloseQuestionnaireRespMessage.h"
#import "PTGetFreshWelfareQuestionnaireRespMessage.h"
#import "PTAnswerFreshWelfareQuestionnaireRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Questionnaire)
/**
  问卷获取
*/
- (RACSignal *)getQuestionnaireWithReqParameters:(PTGetQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  问卷获取
*/
- (RACSignal *)getQuestionnaireWithReqParameters:(PTGetQuestionnaireReqMessage *)reqParameters;
/**
  问卷下问题的答案提交
*/
- (RACSignal *)answerQuestionnaireWithReqParameters:(PTAnswerQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  问卷下问题的答案提交
*/
- (RACSignal *)answerQuestionnaireWithReqParameters:(PTAnswerQuestionnaireReqMessage *)reqParameters;
/**
  关闭问卷
*/
- (RACSignal *)closeQuestionnaireWithReqParameters:(PTCloseQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  关闭问卷
*/
- (RACSignal *)closeQuestionnaireWithReqParameters:(PTCloseQuestionnaireReqMessage *)reqParameters;
/**
  获取爱尝鲜福利的专属问卷信息
*/
- (RACSignal *)getFreshWelfareQuestionnaireWithReqParameters:(PTGetFreshWelfareQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取爱尝鲜福利的专属问卷信息
*/
- (RACSignal *)getFreshWelfareQuestionnaireWithReqParameters:(PTGetFreshWelfareQuestionnaireReqMessage *)reqParameters;
/**
  回答爱尝鲜福利的问卷
*/
- (RACSignal *)answerFreshWelfareQuestionnaireWithReqParameters:(PTAnswerFreshWelfareQuestionnaireReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  回答爱尝鲜福利的问卷
*/
- (RACSignal *)answerFreshWelfareQuestionnaireWithReqParameters:(PTAnswerFreshWelfareQuestionnaireReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
