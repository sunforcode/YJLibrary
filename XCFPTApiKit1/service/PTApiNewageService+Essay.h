// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTCreateEssayReqMessage.h"
#import "PTCanUpdateEssayReqMessage.h"
#import "PTUpdateEssayReqMessage.h"
#import "PTShowEssayReqMessage.h"
#import "PTListEssaysReqMessage.h"
#import "PTListUserEssaysReqMessage.h"
#import "PTDelEssayReqMessage.h"
#import "PTCreateCommentReqMessage.h"
#import "PTRemoveCommentReqMessage.h"
#import "PTListCommentReqMessage.h"
#import "PTDiggEssayReqMessage.h"
#import "PTUndiggEssayReqMessage.h"
#import "PTCollectEssayReqMessage.h"
#import "PTUncollectEssayReqMessage.h"
#import "PTPagedUserCollectedEssaysReqMessage.h"
#import "PTReportEssayReqMessage.h"
#import "PTReportEssayCommentReqMessage.h"
#import "PTPagedGetDiggEssayUsersReqMessage.h"
#import "PTPagedRelatedEssaysReqMessage.h"
#import "PTPagedSimilarEssayReqMessage.h"
#import "PTCreateEssayRespMessage.h"
#import "PTCanUpdateEssayRespMessage.h"
#import "PTUpdateEssayRespMessage.h"
#import "PTShowEssayRespMessage.h"
#import "PTListEssaysRespMessage.h"
#import "PTListUserEssaysRespMessage.h"
#import "PTDelEssayRespMessage.h"
#import "PTCreateCommentRespMessage.h"
#import "PTRemoveCommentRespMessage.h"
#import "PTListCommentRespMessage.h"
#import "PTDiggEssayRespMessage.h"
#import "PTUndiggEssayRespMessage.h"
#import "PTCollectEssayRespMessage.h"
#import "PTUncollectEssayRespMessage.h"
#import "PTPagedUserCollectedEssaysRespMessage.h"
#import "PTReportEssayRespMessage.h"
#import "PTReportEssayCommentRespMessage.h"
#import "PTPagedGetDiggEssayUsersRespMessage.h"
#import "PTPagedRelatedEssaysRespMessage.h"
#import "PTPagedSimilarEssayRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Essay)
/**
  创建故事
*/
- (RACSignal *)createEssayWithReqParameters:(PTCreateEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  创建故事
*/
- (RACSignal *)createEssayWithReqParameters:(PTCreateEssayReqMessage *)reqParameters;
/**
  查看是否能更新故事
*/
- (RACSignal *)canUpdateEssayWithReqParameters:(PTCanUpdateEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看是否能更新故事
*/
- (RACSignal *)canUpdateEssayWithReqParameters:(PTCanUpdateEssayReqMessage *)reqParameters;
/**
  更新故事
*/
- (RACSignal *)updateEssayWithReqParameters:(PTUpdateEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  更新故事
*/
- (RACSignal *)updateEssayWithReqParameters:(PTUpdateEssayReqMessage *)reqParameters;
/**
  查看新品类的详情
*/
- (RACSignal *)showEssayWithReqParameters:(PTShowEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看新品类的详情
*/
- (RACSignal *)showEssayWithReqParameters:(PTShowEssayReqMessage *)reqParameters;
/**
  查看故事的列表页
*/
- (RACSignal *)listEssaysWithReqParameters:(PTListEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看故事的列表页
*/
- (RACSignal *)listEssaysWithReqParameters:(PTListEssaysReqMessage *)reqParameters;
/**
  查看用户故事的列表页
*/
- (RACSignal *)listUserEssaysWithReqParameters:(PTListUserEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看用户故事的列表页
*/
- (RACSignal *)listUserEssaysWithReqParameters:(PTListUserEssaysReqMessage *)reqParameters;
/**
  删除故事
*/
- (RACSignal *)delEssayWithReqParameters:(PTDelEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  删除故事
*/
- (RACSignal *)delEssayWithReqParameters:(PTDelEssayReqMessage *)reqParameters;
/**
  故事评论
*/
- (RACSignal *)createCommentWithReqParameters:(PTCreateCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  故事评论
*/
- (RACSignal *)createCommentWithReqParameters:(PTCreateCommentReqMessage *)reqParameters;
- (RACSignal *)removeCommentWithReqParameters:(PTRemoveCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
- (RACSignal *)removeCommentWithReqParameters:(PTRemoveCommentReqMessage *)reqParameters;
- (RACSignal *)listCommentWithReqParameters:(PTListCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
- (RACSignal *)listCommentWithReqParameters:(PTListCommentReqMessage *)reqParameters;
/**
  故事点赞
*/
- (RACSignal *)diggEssayWithReqParameters:(PTDiggEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  故事点赞
*/
- (RACSignal *)diggEssayWithReqParameters:(PTDiggEssayReqMessage *)reqParameters;
- (RACSignal *)undiggEssayWithReqParameters:(PTUndiggEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
- (RACSignal *)undiggEssayWithReqParameters:(PTUndiggEssayReqMessage *)reqParameters;
/**
  故事收藏
*/
- (RACSignal *)collectEssayWithReqParameters:(PTCollectEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  故事收藏
*/
- (RACSignal *)collectEssayWithReqParameters:(PTCollectEssayReqMessage *)reqParameters;
- (RACSignal *)uncollectEssayWithReqParameters:(PTUncollectEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
- (RACSignal *)uncollectEssayWithReqParameters:(PTUncollectEssayReqMessage *)reqParameters;
/**
*/
- (RACSignal *)pagedUserCollectedEssaysWithReqParameters:(PTPagedUserCollectedEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
*/
- (RACSignal *)pagedUserCollectedEssaysWithReqParameters:(PTPagedUserCollectedEssaysReqMessage *)reqParameters;
/**
  举报故事
*/
- (RACSignal *)reportEssayWithReqParameters:(PTReportEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  举报故事
*/
- (RACSignal *)reportEssayWithReqParameters:(PTReportEssayReqMessage *)reqParameters;
/**
  举报故事下面的评论
*/
- (RACSignal *)reportEssayCommentWithReqParameters:(PTReportEssayCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  举报故事下面的评论
*/
- (RACSignal *)reportEssayCommentWithReqParameters:(PTReportEssayCommentReqMessage *)reqParameters;
/**
  查看给故事点过赞的人
*/
- (RACSignal *)pagedGetDiggEssayUsersWithReqParameters:(PTPagedGetDiggEssayUsersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看给故事点过赞的人
*/
- (RACSignal *)pagedGetDiggEssayUsersWithReqParameters:(PTPagedGetDiggEssayUsersReqMessage *)reqParameters;
/**
  获取关联故事
*/
- (RACSignal *)pagedRelatedEssaysWithReqParameters:(PTPagedRelatedEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取关联故事
*/
- (RACSignal *)pagedRelatedEssaysWithReqParameters:(PTPagedRelatedEssaysReqMessage *)reqParameters;
/**
  获取相似的故事
*/
- (RACSignal *)pagedSimilarEssayWithReqParameters:(PTPagedSimilarEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取相似的故事
*/
- (RACSignal *)pagedSimilarEssayWithReqParameters:(PTPagedSimilarEssayReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
