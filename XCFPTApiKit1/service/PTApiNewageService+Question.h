// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTRecipeAskQuestionReqMessage.h"
#import "PTPagedRecipeQuestionsReqMessage.h"
#import "PTPagedRecipeQuestionsV2ReqMessage.h"
#import "PTPagedRecipeQuestionAnswersReqMessage.h"
#import "PTDiggRecipeQuestionAnswerReqMessage.h"
#import "PTUndiggRecipeQuestionAnswerReqMessage.h"
#import "PTAnswerRecipeQuestionV2ReqMessage.h"
#import "PTDeleteRecipeAnswerReqMessage.h"
#import "PTReportRecipeAnswerReqMessage.h"
#import "PTAskQuestionReqMessage.h"
#import "PTPagedQuestionsReqMessage.h"
#import "PTPagedQuestionAnswersReqMessage.h"
#import "PTDiggQuestionAnswerReqMessage.h"
#import "PTUndiggQuestionAnswerReqMessage.h"
#import "PTDiggQuestionReqMessage.h"
#import "PTUndiggQuestionReqMessage.h"
#import "PTAnswerQuestionReqMessage.h"
#import "PTDeleteAnswerReqMessage.h"
#import "PTDeleteQuestionReqMessage.h"
#import "PTReportAnswerReqMessage.h"
#import "PTReportQuestionReqMessage.h"
#import "PTSearchQuestionReqMessage.h"
#import "PTRecipeAskQuestionRespMessage.h"
#import "PTPagedRecipeQuestionsRespMessage.h"
#import "PTPagedRecipeQuestionsV2RespMessage.h"
#import "PTPagedRecipeQuestionAnswersRespMessage.h"
#import "PTDiggRecipeQuestionAnswerRespMessage.h"
#import "PTUndiggRecipeQuestionAnswerRespMessage.h"
#import "PTAnswerRecipeQuestionV2RespMessage.h"
#import "PTDeleteRecipeAnswerRespMessage.h"
#import "PTReportRecipeAnswerRespMessage.h"
#import "PTAskQuestionRespMessage.h"
#import "PTPagedQuestionsRespMessage.h"
#import "PTPagedQuestionAnswersRespMessage.h"
#import "PTDiggQuestionAnswerRespMessage.h"
#import "PTUndiggQuestionAnswerRespMessage.h"
#import "PTDiggQuestionRespMessage.h"
#import "PTUndiggQuestionRespMessage.h"
#import "PTAnswerQuestionRespMessage.h"
#import "PTDeleteAnswerRespMessage.h"
#import "PTDeleteQuestionRespMessage.h"
#import "PTReportAnswerRespMessage.h"
#import "PTReportQuestionRespMessage.h"
#import "PTSearchQuestionRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Question)
/**
  给菜谱留言
*/
- (RACSignal *)recipeAskQuestionWithReqParameters:(PTRecipeAskQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  给菜谱留言
*/
- (RACSignal *)recipeAskQuestionWithReqParameters:(PTRecipeAskQuestionReqMessage *)reqParameters;
/**
  菜谱留言翻页
*/
- (RACSignal *)pagedRecipeQuestionsWithReqParameters:(PTPagedRecipeQuestionsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱留言翻页
*/
- (RACSignal *)pagedRecipeQuestionsWithReqParameters:(PTPagedRecipeQuestionsReqMessage *)reqParameters;
/**
  菜谱评论翻页
*/
- (RACSignal *)pagedRecipeQuestionsV2WithReqParameters:(PTPagedRecipeQuestionsV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱评论翻页
*/
- (RACSignal *)pagedRecipeQuestionsV2WithReqParameters:(PTPagedRecipeQuestionsV2ReqMessage *)reqParameters;
/**
  菜谱评论回复翻页
*/
- (RACSignal *)pagedRecipeQuestionAnswersWithReqParameters:(PTPagedRecipeQuestionAnswersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱评论回复翻页
*/
- (RACSignal *)pagedRecipeQuestionAnswersWithReqParameters:(PTPagedRecipeQuestionAnswersReqMessage *)reqParameters;
/**
  菜谱评论回复点赞
*/
- (RACSignal *)diggRecipeQuestionAnswerWithReqParameters:(PTDiggRecipeQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱评论回复点赞
*/
- (RACSignal *)diggRecipeQuestionAnswerWithReqParameters:(PTDiggRecipeQuestionAnswerReqMessage *)reqParameters;
/**
  菜谱评论回复取消点赞
*/
- (RACSignal *)undiggRecipeQuestionAnswerWithReqParameters:(PTUndiggRecipeQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱评论回复取消点赞
*/
- (RACSignal *)undiggRecipeQuestionAnswerWithReqParameters:(PTUndiggRecipeQuestionAnswerReqMessage *)reqParameters;
/**
  回复菜谱评论
*/
- (RACSignal *)answerRecipeQuestionV2WithReqParameters:(PTAnswerRecipeQuestionV2ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  回复菜谱评论
*/
- (RACSignal *)answerRecipeQuestionV2WithReqParameters:(PTAnswerRecipeQuestionV2ReqMessage *)reqParameters;
/**
  删除菜谱评论回复
*/
- (RACSignal *)deleteRecipeAnswerWithReqParameters:(PTDeleteRecipeAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  删除菜谱评论回复
*/
- (RACSignal *)deleteRecipeAnswerWithReqParameters:(PTDeleteRecipeAnswerReqMessage *)reqParameters;
/**
  举报菜谱评论回复
*/
- (RACSignal *)reportRecipeAnswerWithReqParameters:(PTReportRecipeAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  举报菜谱评论回复
*/
- (RACSignal *)reportRecipeAnswerWithReqParameters:(PTReportRecipeAnswerReqMessage *)reqParameters;
/**
  评论留言
*/
- (RACSignal *)askQuestionWithReqParameters:(PTAskQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论留言
*/
- (RACSignal *)askQuestionWithReqParameters:(PTAskQuestionReqMessage *)reqParameters;
/**
  评论翻页
*/
- (RACSignal *)pagedQuestionsWithReqParameters:(PTPagedQuestionsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论翻页
*/
- (RACSignal *)pagedQuestionsWithReqParameters:(PTPagedQuestionsReqMessage *)reqParameters;
/**
  评论回复翻页
*/
- (RACSignal *)pagedQuestionAnswersWithReqParameters:(PTPagedQuestionAnswersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论回复翻页
*/
- (RACSignal *)pagedQuestionAnswersWithReqParameters:(PTPagedQuestionAnswersReqMessage *)reqParameters;
/**
  评论回复点赞
*/
- (RACSignal *)diggQuestionAnswerWithReqParameters:(PTDiggQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论回复点赞
*/
- (RACSignal *)diggQuestionAnswerWithReqParameters:(PTDiggQuestionAnswerReqMessage *)reqParameters;
/**
  评论回复取消点赞
*/
- (RACSignal *)undiggQuestionAnswerWithReqParameters:(PTUndiggQuestionAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论回复取消点赞
*/
- (RACSignal *)undiggQuestionAnswerWithReqParameters:(PTUndiggQuestionAnswerReqMessage *)reqParameters;
/**
  评论点赞
*/
- (RACSignal *)diggQuestionWithReqParameters:(PTDiggQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论点赞
*/
- (RACSignal *)diggQuestionWithReqParameters:(PTDiggQuestionReqMessage *)reqParameters;
/**
  评论取消点赞
*/
- (RACSignal *)undiggQuestionWithReqParameters:(PTUndiggQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  评论取消点赞
*/
- (RACSignal *)undiggQuestionWithReqParameters:(PTUndiggQuestionReqMessage *)reqParameters;
/**
  回复评论
*/
- (RACSignal *)answerQuestionWithReqParameters:(PTAnswerQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  回复评论
*/
- (RACSignal *)answerQuestionWithReqParameters:(PTAnswerQuestionReqMessage *)reqParameters;
/**
  删除评论回复
*/
- (RACSignal *)deleteAnswerWithReqParameters:(PTDeleteAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  删除评论回复
*/
- (RACSignal *)deleteAnswerWithReqParameters:(PTDeleteAnswerReqMessage *)reqParameters;
/**
  删除评论
*/
- (RACSignal *)deleteQuestionWithReqParameters:(PTDeleteQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  删除评论
*/
- (RACSignal *)deleteQuestionWithReqParameters:(PTDeleteQuestionReqMessage *)reqParameters;
/**
  举报评论回复
*/
- (RACSignal *)reportAnswerWithReqParameters:(PTReportAnswerReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  举报评论回复
*/
- (RACSignal *)reportAnswerWithReqParameters:(PTReportAnswerReqMessage *)reqParameters;
/**
  举报评论
*/
- (RACSignal *)reportQuestionWithReqParameters:(PTReportQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  举报评论
*/
- (RACSignal *)reportQuestionWithReqParameters:(PTReportQuestionReqMessage *)reqParameters;
/**
  相关留言搜索
*/
- (RACSignal *)searchQuestionWithReqParameters:(PTSearchQuestionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  相关留言搜索
*/
- (RACSignal *)searchQuestionWithReqParameters:(PTSearchQuestionReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
