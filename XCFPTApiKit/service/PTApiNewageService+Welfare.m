// apic_version = 0.5.5
#import "PTApiNewageService+Welfare.h"
@implementation PTApiNewageService (Welfare)
- (RACSignal *)getUserWelfareViewWithReqParameters:(PTGetUserWelfareViewReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"welfare/user_welfare_view.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetUserWelfareViewRespMessage.class
                         requestName:@"GetUserWelfareView"
                           apiConfig:apiConfig];
}
- (RACSignal *)getUserWelfareViewWithReqParameters:(PTGetUserWelfareViewReqMessage *)reqParameters {
    return [self getUserWelfareViewWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedUserHistoricalWelfareViewsWithReqParameters:(PTPagedUserHistoricalWelfareViewsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"welfare/paged_user_historical_welfare_views.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedUserHistoricalWelfareViewsRespMessage.class
                         requestName:@"PagedUserHistoricalWelfareViews"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedUserHistoricalWelfareViewsWithReqParameters:(PTPagedUserHistoricalWelfareViewsReqMessage *)reqParameters {
    return [self pagedUserHistoricalWelfareViewsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getUnfinishedWelfareUrlWithReqParameters:(PTGetUnfinishedWelfareUrlReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"welfare/get_unfinished_welfare_url.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetUnfinishedWelfareUrlRespMessage.class
                         requestName:@"GetUnfinishedWelfareUrl"
                           apiConfig:apiConfig];
}
- (RACSignal *)getUnfinishedWelfareUrlWithReqParameters:(PTGetUnfinishedWelfareUrlReqMessage *)reqParameters {
    return [self getUnfinishedWelfareUrlWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getFreshWelfareStatusWithReqParameters:(PTGetFreshWelfareStatusReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"welfare/get_fresh_welfare_status.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetFreshWelfareStatusRespMessage.class
                         requestName:@"GetFreshWelfareStatus"
                           apiConfig:apiConfig];
}
- (RACSignal *)getFreshWelfareStatusWithReqParameters:(PTGetFreshWelfareStatusReqMessage *)reqParameters {
    return [self getFreshWelfareStatusWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getFreshWelfareStatsReportWithReqParameters:(PTGetFreshWelfareStatsReportReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"welfare/get_fresh_welfare_stats_report.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetFreshWelfareStatsReportRespMessage.class
                         requestName:@"GetFreshWelfareStatsReport"
                           apiConfig:apiConfig];
}
- (RACSignal *)getFreshWelfareStatsReportWithReqParameters:(PTGetFreshWelfareStatsReportReqMessage *)reqParameters {
    return [self getFreshWelfareStatsReportWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
