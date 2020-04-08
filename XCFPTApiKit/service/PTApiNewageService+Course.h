// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTCreateCourseFeedbackReqMessage.h"
#import "PTShowCourseRateTagsReqMessage.h"
#import "PTPagedCourseRatesReqMessage.h"
#import "PTGetCourseDishesOrderByTimeReqMessage.h"
#import "PTGetCourseTagReqMessage.h"
#import "PTPagedGetTagCoursesReqMessage.h"
#import "PTGetTagHotCoursesReqMessage.h"
#import "PTPagedCoursesBySectionReqMessage.h"
#import "PTGetClassroomTabsReqMessage.h"
#import "PTPagedTopCoursesPurchasedByConsumersReqMessage.h"
#import "PTGetMyCoursesStatisticsReqMessage.h"
#import "PTGetMyCoursesReqMessage.h"
#import "PTSearchMyCoursesReqMessage.h"
#import "PTPagedClassroomHomepageTabsReqMessage.h"
#import "PTPagedClassroomHomepageRecommendationsReqMessage.h"
#import "PTApplyForCourseVoucherReqMessage.h"
#import "PTGetFreeCourseListReqMessage.h"
#import "PTBindForFreeCourseReqMessage.h"
#import "PTObtainFreePublicCourseReqMessage.h"
#import "PTGetMonthlyCourseRankingListReqMessage.h"
#import "PTPagedGetTopCourseRankingListReqMessage.h"
#import "PTCreateCourseFeedbackRespMessage.h"
#import "PTShowCourseRateTagsRespMessage.h"
#import "PTPagedCourseRatesRespMessage.h"
#import "PTGetCourseDishesOrderByTimeRespMessage.h"
#import "PTGetCourseTagRespMessage.h"
#import "PTPagedGetTagCoursesRespMessage.h"
#import "PTGetTagHotCoursesRespMessage.h"
#import "PTPagedCoursesBySectionRespMessage.h"
#import "PTGetClassroomTabsRespMessage.h"
#import "PTPagedTopCoursesPurchasedByConsumersRespMessage.h"
#import "PTGetMyCoursesStatisticsRespMessage.h"
#import "PTGetMyCoursesRespMessage.h"
#import "PTSearchMyCoursesRespMessage.h"
#import "PTPagedClassroomHomepageTabsRespMessage.h"
#import "PTPagedClassroomHomepageRecommendationsRespMessage.h"
#import "PTApplyForCourseVoucherRespMessage.h"
#import "PTGetFreeCourseListRespMessage.h"
#import "PTBindForFreeCourseRespMessage.h"
#import "PTObtainFreePublicCourseRespMessage.h"
#import "PTGetMonthlyCourseRankingListRespMessage.h"
#import "PTPagedGetTopCourseRankingListRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Course)
/**
  厨studio问题反馈
*/
- (RACSignal *)createCourseFeedbackWithReqParameters:(PTCreateCourseFeedbackReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  厨studio问题反馈
*/
- (RACSignal *)createCourseFeedbackWithReqParameters:(PTCreateCourseFeedbackReqMessage *)reqParameters;
/**
  获取课程评价标签
*/
- (RACSignal *)showCourseRateTagsWithReqParameters:(PTShowCourseRateTagsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取课程评价标签
*/
- (RACSignal *)showCourseRateTagsWithReqParameters:(PTShowCourseRateTagsReqMessage *)reqParameters;
/**
  分页获取课程标价信息
*/
- (RACSignal *)pagedCourseRatesWithReqParameters:(PTPagedCourseRatesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  分页获取课程标价信息
*/
- (RACSignal *)pagedCourseRatesWithReqParameters:(PTPagedCourseRatesReqMessage *)reqParameters;
/**
  课程下的作品列表(可以上下翻页并且第一次请求可以指定第一个作品的id)
*/
- (RACSignal *)getCourseDishesOrderByTimeWithReqParameters:(PTGetCourseDishesOrderByTimeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  课程下的作品列表(可以上下翻页并且第一次请求可以指定第一个作品的id)
*/
- (RACSignal *)getCourseDishesOrderByTimeWithReqParameters:(PTGetCourseDishesOrderByTimeReqMessage *)reqParameters;
/**
  获取课程标签
*/
- (RACSignal *)getCourseTagWithReqParameters:(PTGetCourseTagReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取课程标签
*/
- (RACSignal *)getCourseTagWithReqParameters:(PTGetCourseTagReqMessage *)reqParameters;
/**
  分页获取标签课程
*/
- (RACSignal *)pagedGetTagCoursesWithReqParameters:(PTPagedGetTagCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  分页获取标签课程
*/
- (RACSignal *)pagedGetTagCoursesWithReqParameters:(PTPagedGetTagCoursesReqMessage *)reqParameters;
/**
  获取标签下的热门课程
*/
- (RACSignal *)getTagHotCoursesWithReqParameters:(PTGetTagHotCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取标签下的热门课程
*/
- (RACSignal *)getTagHotCoursesWithReqParameters:(PTGetTagHotCoursesReqMessage *)reqParameters;
/**
  获取课堂首页单个section下换一换数据
*/
- (RACSignal *)pagedCoursesBySectionWithReqParameters:(PTPagedCoursesBySectionReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取课堂首页单个section下换一换数据
*/
- (RACSignal *)pagedCoursesBySectionWithReqParameters:(PTPagedCoursesBySectionReqMessage *)reqParameters;
/**
  获取课堂首页运营位列表
*/
- (RACSignal *)getClassroomTabsWithReqParameters:(PTGetClassroomTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取课堂首页运营位列表
*/
- (RACSignal *)getClassroomTabsWithReqParameters:(PTGetClassroomTabsReqMessage *)reqParameters;
/**
  获取【买过这节课的人也买过】的课程列表
*/
- (RACSignal *)pagedTopCoursesPurchasedByConsumersWithReqParameters:(PTPagedTopCoursesPurchasedByConsumersReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取【买过这节课的人也买过】的课程列表
*/
- (RACSignal *)pagedTopCoursesPurchasedByConsumersWithReqParameters:(PTPagedTopCoursesPurchasedByConsumersReqMessage *)reqParameters;
/**
  获取我的课程统计
*/
- (RACSignal *)getMyCoursesStatisticsWithReqParameters:(PTGetMyCoursesStatisticsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取我的课程统计
*/
- (RACSignal *)getMyCoursesStatisticsWithReqParameters:(PTGetMyCoursesStatisticsReqMessage *)reqParameters;
/**
  获取我的课程
*/
- (RACSignal *)getMyCoursesWithReqParameters:(PTGetMyCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取我的课程
*/
- (RACSignal *)getMyCoursesWithReqParameters:(PTGetMyCoursesReqMessage *)reqParameters;
/**
  我的课程搜索
*/
- (RACSignal *)searchMyCoursesWithReqParameters:(PTSearchMyCoursesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  我的课程搜索
*/
- (RACSignal *)searchMyCoursesWithReqParameters:(PTSearchMyCoursesReqMessage *)reqParameters;
/**
  课堂首页 tab 列表
*/
- (RACSignal *)pagedClassroomHomepageTabsWithReqParameters:(PTPagedClassroomHomepageTabsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  课堂首页 tab 列表
*/
- (RACSignal *)pagedClassroomHomepageTabsWithReqParameters:(PTPagedClassroomHomepageTabsReqMessage *)reqParameters;
/**
  课堂首页猜你喜欢列表
*/
- (RACSignal *)pagedClassroomHomepageRecommendationsWithReqParameters:(PTPagedClassroomHomepageRecommendationsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  课堂首页猜你喜欢列表
*/
- (RACSignal *)pagedClassroomHomepageRecommendationsWithReqParameters:(PTPagedClassroomHomepageRecommendationsReqMessage *)reqParameters;
/**
  申请课程优惠券
*/
- (RACSignal *)applyForCourseVoucherWithReqParameters:(PTApplyForCourseVoucherReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  申请课程优惠券
*/
- (RACSignal *)applyForCourseVoucherWithReqParameters:(PTApplyForCourseVoucherReqMessage *)reqParameters;
/**
  获取免费课程
*/
- (RACSignal *)getFreeCourseListWithReqParameters:(PTGetFreeCourseListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取免费课程
*/
- (RACSignal *)getFreeCourseListWithReqParameters:(PTGetFreeCourseListReqMessage *)reqParameters;
/**
  绑定免费课程
*/
- (RACSignal *)bindForFreeCourseWithReqParameters:(PTBindForFreeCourseReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  绑定免费课程
*/
- (RACSignal *)bindForFreeCourseWithReqParameters:(PTBindForFreeCourseReqMessage *)reqParameters;
/**
  获取免费公开课
*/
- (RACSignal *)obtainFreePublicCourseWithReqParameters:(PTObtainFreePublicCourseReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取免费公开课
*/
- (RACSignal *)obtainFreePublicCourseWithReqParameters:(PTObtainFreePublicCourseReqMessage *)reqParameters;
/**
  获取月度榜单课程
*/
- (RACSignal *)getMonthlyCourseRankingListWithReqParameters:(PTGetMonthlyCourseRankingListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取月度榜单课程
*/
- (RACSignal *)getMonthlyCourseRankingListWithReqParameters:(PTGetMonthlyCourseRankingListReqMessage *)reqParameters;
/**
  分页获取top250总榜课程
*/
- (RACSignal *)pagedGetTopCourseRankingListWithReqParameters:(PTPagedGetTopCourseRankingListReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  分页获取top250总榜课程
*/
- (RACSignal *)pagedGetTopCourseRankingListWithReqParameters:(PTPagedGetTopCourseRankingListReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
