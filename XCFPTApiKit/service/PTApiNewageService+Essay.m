// apic_version = 0.5.5
#import "PTApiNewageService+Essay.h"
@implementation PTApiNewageService (Essay)
- (RACSignal *)createEssayWithReqParameters:(PTCreateEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/create.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateEssayRespMessage.class
                         requestName:@"CreateEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)createEssayWithReqParameters:(PTCreateEssayReqMessage *)reqParameters {
    return [self createEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)canUpdateEssayWithReqParameters:(PTCanUpdateEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/can_update_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCanUpdateEssayRespMessage.class
                         requestName:@"CanUpdateEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)canUpdateEssayWithReqParameters:(PTCanUpdateEssayReqMessage *)reqParameters {
    return [self canUpdateEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)updateEssayWithReqParameters:(PTUpdateEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/update_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUpdateEssayRespMessage.class
                         requestName:@"UpdateEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)updateEssayWithReqParameters:(PTUpdateEssayReqMessage *)reqParameters {
    return [self updateEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)showEssayWithReqParameters:(PTShowEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/show.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTShowEssayRespMessage.class
                         requestName:@"ShowEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)showEssayWithReqParameters:(PTShowEssayReqMessage *)reqParameters {
    return [self showEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listEssaysWithReqParameters:(PTListEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListEssaysRespMessage.class
                         requestName:@"ListEssays"
                           apiConfig:apiConfig];
}
- (RACSignal *)listEssaysWithReqParameters:(PTListEssaysReqMessage *)reqParameters {
    return [self listEssaysWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listUserEssaysWithReqParameters:(PTListUserEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/list_user_essays.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListUserEssaysRespMessage.class
                         requestName:@"ListUserEssays"
                           apiConfig:apiConfig];
}
- (RACSignal *)listUserEssaysWithReqParameters:(PTListUserEssaysReqMessage *)reqParameters {
    return [self listUserEssaysWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)delEssayWithReqParameters:(PTDelEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/del.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDelEssayRespMessage.class
                         requestName:@"DelEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)delEssayWithReqParameters:(PTDelEssayReqMessage *)reqParameters {
    return [self delEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)createCommentWithReqParameters:(PTCreateCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/create_comment.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateCommentRespMessage.class
                         requestName:@"CreateComment"
                           apiConfig:apiConfig];
}
- (RACSignal *)createCommentWithReqParameters:(PTCreateCommentReqMessage *)reqParameters {
    return [self createCommentWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)removeCommentWithReqParameters:(PTRemoveCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/remove_comment.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTRemoveCommentRespMessage.class
                         requestName:@"RemoveComment"
                           apiConfig:apiConfig];
}
- (RACSignal *)removeCommentWithReqParameters:(PTRemoveCommentReqMessage *)reqParameters {
    return [self removeCommentWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listCommentWithReqParameters:(PTListCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/list_comment.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListCommentRespMessage.class
                         requestName:@"ListComment"
                           apiConfig:apiConfig];
}
- (RACSignal *)listCommentWithReqParameters:(PTListCommentReqMessage *)reqParameters {
    return [self listCommentWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)diggEssayWithReqParameters:(PTDiggEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/digg_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTDiggEssayRespMessage.class
                         requestName:@"DiggEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)diggEssayWithReqParameters:(PTDiggEssayReqMessage *)reqParameters {
    return [self diggEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)undiggEssayWithReqParameters:(PTUndiggEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/undigg_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUndiggEssayRespMessage.class
                         requestName:@"UndiggEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)undiggEssayWithReqParameters:(PTUndiggEssayReqMessage *)reqParameters {
    return [self undiggEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)collectEssayWithReqParameters:(PTCollectEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/collect_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCollectEssayRespMessage.class
                         requestName:@"CollectEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)collectEssayWithReqParameters:(PTCollectEssayReqMessage *)reqParameters {
    return [self collectEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)uncollectEssayWithReqParameters:(PTUncollectEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/uncollect_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUncollectEssayRespMessage.class
                         requestName:@"UncollectEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)uncollectEssayWithReqParameters:(PTUncollectEssayReqMessage *)reqParameters {
    return [self uncollectEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedUserCollectedEssaysWithReqParameters:(PTPagedUserCollectedEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/paged_user_collected_essays.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedUserCollectedEssaysRespMessage.class
                         requestName:@"PagedUserCollectedEssays"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedUserCollectedEssaysWithReqParameters:(PTPagedUserCollectedEssaysReqMessage *)reqParameters {
    return [self pagedUserCollectedEssaysWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)reportEssayWithReqParameters:(PTReportEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/report_essay.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTReportEssayRespMessage.class
                         requestName:@"ReportEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)reportEssayWithReqParameters:(PTReportEssayReqMessage *)reqParameters {
    return [self reportEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)reportEssayCommentWithReqParameters:(PTReportEssayCommentReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/report_essay_comment.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTReportEssayCommentRespMessage.class
                         requestName:@"ReportEssayComment"
                           apiConfig:apiConfig];
}
- (RACSignal *)reportEssayCommentWithReqParameters:(PTReportEssayCommentReqMessage *)reqParameters {
    return [self reportEssayCommentWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedGetDiggEssayUsersWithReqParameters:(PTPagedGetDiggEssayUsersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/paged_get_digg_essay_users.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedGetDiggEssayUsersRespMessage.class
                         requestName:@"PagedGetDiggEssayUsers"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedGetDiggEssayUsersWithReqParameters:(PTPagedGetDiggEssayUsersReqMessage *)reqParameters {
    return [self pagedGetDiggEssayUsersWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedRelatedEssaysWithReqParameters:(PTPagedRelatedEssaysReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/paged_related_essays.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedRelatedEssaysRespMessage.class
                         requestName:@"PagedRelatedEssays"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedRelatedEssaysWithReqParameters:(PTPagedRelatedEssaysReqMessage *)reqParameters {
    return [self pagedRelatedEssaysWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedSimilarEssayWithReqParameters:(PTPagedSimilarEssayReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"essay/paged_similar_essays.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedSimilarEssayRespMessage.class
                         requestName:@"PagedSimilarEssay"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedSimilarEssayWithReqParameters:(PTPagedSimilarEssayReqMessage *)reqParameters {
    return [self pagedSimilarEssayWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
