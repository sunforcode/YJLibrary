// apic_version = 0.5.5
#import "PTApiNewageService+Course.h"
@implementation PTApiNewageService (Course)
- (RACSignal *)createCourseFeedbackWithReqParameters:(PTCreateCourseFeedbackReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/feedback/create.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCreateCourseFeedbackRespMessage.class
                         requestName:@"CreateCourseFeedback"
                           apiConfig:apiConfig];
}
- (RACSignal *)createCourseFeedbackWithReqParameters:(PTCreateCourseFeedbackReqMessage *)reqParameters {
    return [self createCourseFeedbackWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)showCourseRateTagsWithReqParameters:(PTShowCourseRateTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/rate_tags/all.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTShowCourseRateTagsRespMessage.class
                         requestName:@"ShowCourseRateTags"
                           apiConfig:apiConfig];
}
- (RACSignal *)showCourseRateTagsWithReqParameters:(PTShowCourseRateTagsReqMessage *)reqParameters {
    return [self showCourseRateTagsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedCourseRatesWithReqParameters:(PTPagedCourseRatesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/rates/list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedCourseRatesRespMessage.class
                         requestName:@"PagedCourseRates"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedCourseRatesWithReqParameters:(PTPagedCourseRatesReqMessage *)reqParameters {
    return [self pagedCourseRatesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getCourseDishesOrderByTimeWithReqParameters:(PTGetCourseDishesOrderByTimeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"course/dishes_order_by_time.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetCourseDishesOrderByTimeRespMessage.class
                         requestName:@"GetCourseDishesOrderByTime"
                           apiConfig:apiConfig];
}
- (RACSignal *)getCourseDishesOrderByTimeWithReqParameters:(PTGetCourseDishesOrderByTimeReqMessage *)reqParameters {
    return [self getCourseDishesOrderByTimeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getCourseTagWithReqParameters:(PTGetCourseTagReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/tag/show.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetCourseTagRespMessage.class
                         requestName:@"GetCourseTag"
                           apiConfig:apiConfig];
}
- (RACSignal *)getCourseTagWithReqParameters:(PTGetCourseTagReqMessage *)reqParameters {
    return [self getCourseTagWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedGetTagCoursesWithReqParameters:(PTPagedGetTagCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/tag/course_list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedGetTagCoursesRespMessage.class
                         requestName:@"PagedGetTagCourses"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedGetTagCoursesWithReqParameters:(PTPagedGetTagCoursesReqMessage *)reqParameters {
    return [self pagedGetTagCoursesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getTagHotCoursesWithReqParameters:(PTGetTagHotCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/tag/hot_courses.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetTagHotCoursesRespMessage.class
                         requestName:@"GetTagHotCourses"
                           apiConfig:apiConfig];
}
- (RACSignal *)getTagHotCoursesWithReqParameters:(PTGetTagHotCoursesReqMessage *)reqParameters {
    return [self getTagHotCoursesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedCoursesBySectionWithReqParameters:(PTPagedCoursesBySectionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/section_refresh.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedCoursesBySectionRespMessage.class
                         requestName:@"PagedCoursesBySection"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedCoursesBySectionWithReqParameters:(PTPagedCoursesBySectionReqMessage *)reqParameters {
    return [self pagedCoursesBySectionWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getClassroomTabsWithReqParameters:(PTGetClassroomTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/classroom_tabs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetClassroomTabsRespMessage.class
                         requestName:@"GetClassroomTabs"
                           apiConfig:apiConfig];
}
- (RACSignal *)getClassroomTabsWithReqParameters:(PTGetClassroomTabsReqMessage *)reqParameters {
    return [self getClassroomTabsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedTopCoursesPurchasedByConsumersWithReqParameters:(PTPagedTopCoursesPurchasedByConsumersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/top_courses_purchased_by_consumers.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedTopCoursesPurchasedByConsumersRespMessage.class
                         requestName:@"PagedTopCoursesPurchasedByConsumers"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedTopCoursesPurchasedByConsumersWithReqParameters:(PTPagedTopCoursesPurchasedByConsumersReqMessage *)reqParameters {
    return [self pagedTopCoursesPurchasedByConsumersWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getMyCoursesStatisticsWithReqParameters:(PTGetMyCoursesStatisticsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/my_courses_statistics.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetMyCoursesStatisticsRespMessage.class
                         requestName:@"GetMyCoursesStatistics"
                           apiConfig:apiConfig];
}
- (RACSignal *)getMyCoursesStatisticsWithReqParameters:(PTGetMyCoursesStatisticsReqMessage *)reqParameters {
    return [self getMyCoursesStatisticsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getMyCoursesWithReqParameters:(PTGetMyCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/my_courses_v2.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetMyCoursesRespMessage.class
                         requestName:@"GetMyCourses"
                           apiConfig:apiConfig];
}
- (RACSignal *)getMyCoursesWithReqParameters:(PTGetMyCoursesReqMessage *)reqParameters {
    return [self getMyCoursesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)searchMyCoursesWithReqParameters:(PTSearchMyCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/search_my_courses.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTSearchMyCoursesRespMessage.class
                         requestName:@"SearchMyCourses"
                           apiConfig:apiConfig];
}
- (RACSignal *)searchMyCoursesWithReqParameters:(PTSearchMyCoursesReqMessage *)reqParameters {
    return [self searchMyCoursesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedClassroomHomepageTabsWithReqParameters:(PTPagedClassroomHomepageTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/classroom/homepage/paged_tabs.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedClassroomHomepageTabsRespMessage.class
                         requestName:@"PagedClassroomHomepageTabs"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedClassroomHomepageTabsWithReqParameters:(PTPagedClassroomHomepageTabsReqMessage *)reqParameters {
    return [self pagedClassroomHomepageTabsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedClassroomHomepageRecommendationsWithReqParameters:(PTPagedClassroomHomepageRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/classroom/homepage/paged_course_recommendations.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedClassroomHomepageRecommendationsRespMessage.class
                         requestName:@"PagedClassroomHomepageRecommendations"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedClassroomHomepageRecommendationsWithReqParameters:(PTPagedClassroomHomepageRecommendationsReqMessage *)reqParameters {
    return [self pagedClassroomHomepageRecommendationsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)applyForCourseVoucherWithReqParameters:(PTApplyForCourseVoucherReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/apply_for_voucher.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTApplyForCourseVoucherRespMessage.class
                         requestName:@"ApplyForCourseVoucher"
                           apiConfig:apiConfig];
}
- (RACSignal *)applyForCourseVoucherWithReqParameters:(PTApplyForCourseVoucherReqMessage *)reqParameters {
    return [self applyForCourseVoucherWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getFreeCourseListWithReqParameters:(PTGetFreeCourseListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/get_free_course_list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetFreeCourseListRespMessage.class
                         requestName:@"GetFreeCourseList"
                           apiConfig:apiConfig];
}
- (RACSignal *)getFreeCourseListWithReqParameters:(PTGetFreeCourseListReqMessage *)reqParameters {
    return [self getFreeCourseListWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)bindForFreeCourseWithReqParameters:(PTBindForFreeCourseReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/bind_for_free_course.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTBindForFreeCourseRespMessage.class
                         requestName:@"BindForFreeCourse"
                           apiConfig:apiConfig];
}
- (RACSignal *)bindForFreeCourseWithReqParameters:(PTBindForFreeCourseReqMessage *)reqParameters {
    return [self bindForFreeCourseWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)obtainFreePublicCourseWithReqParameters:(PTObtainFreePublicCourseReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/obtain_free_public_course.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTObtainFreePublicCourseRespMessage.class
                         requestName:@"ObtainFreePublicCourse"
                           apiConfig:apiConfig];
}
- (RACSignal *)obtainFreePublicCourseWithReqParameters:(PTObtainFreePublicCourseReqMessage *)reqParameters {
    return [self obtainFreePublicCourseWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getMonthlyCourseRankingListWithReqParameters:(PTGetMonthlyCourseRankingListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/get_monthly_course_ranking_list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetMonthlyCourseRankingListRespMessage.class
                         requestName:@"GetMonthlyCourseRankingList"
                           apiConfig:apiConfig];
}
- (RACSignal *)getMonthlyCourseRankingListWithReqParameters:(PTGetMonthlyCourseRankingListReqMessage *)reqParameters {
    return [self getMonthlyCourseRankingListWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedGetTopCourseRankingListWithReqParameters:(PTPagedGetTopCourseRankingListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"courses/page_get_top_course_ranking_list.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedGetTopCourseRankingListRespMessage.class
                         requestName:@"PagedGetTopCourseRankingList"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedGetTopCourseRankingListWithReqParameters:(PTPagedGetTopCourseRankingListReqMessage *)reqParameters {
    return [self pagedGetTopCourseRankingListWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
