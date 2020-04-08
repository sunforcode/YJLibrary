// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTGetUserWelfareViewReqMessage.h"
#import "PTPagedUserHistoricalWelfareViewsReqMessage.h"
#import "PTGetUnfinishedWelfareUrlReqMessage.h"
#import "PTGetFreshWelfareStatusReqMessage.h"
#import "PTGetFreshWelfareStatsReportReqMessage.h"
#import "PTGetUserWelfareViewRespMessage.h"
#import "PTPagedUserHistoricalWelfareViewsRespMessage.h"
#import "PTGetUnfinishedWelfareUrlRespMessage.h"
#import "PTGetFreshWelfareStatusRespMessage.h"
#import "PTGetFreshWelfareStatsReportRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Welfare)
/**
  获取用户当前的首页福利
*/
- (RACSignal *)getUserWelfareViewWithReqParameters:(PTGetUserWelfareViewReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户当前的首页福利
*/
- (RACSignal *)getUserWelfareViewWithReqParameters:(PTGetUserWelfareViewReqMessage *)reqParameters;
/**
  获取用户的历史福利记录
*/
- (RACSignal *)pagedUserHistoricalWelfareViewsWithReqParameters:(PTPagedUserHistoricalWelfareViewsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取用户的历史福利记录
*/
- (RACSignal *)pagedUserHistoricalWelfareViewsWithReqParameters:(PTPagedUserHistoricalWelfareViewsReqMessage *)reqParameters;
/**
  用户被选中但是未达到要求的福利
*/
- (RACSignal *)getUnfinishedWelfareUrlWithReqParameters:(PTGetUnfinishedWelfareUrlReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  用户被选中但是未达到要求的福利
*/
- (RACSignal *)getUnfinishedWelfareUrlWithReqParameters:(PTGetUnfinishedWelfareUrlReqMessage *)reqParameters;
/**
  获取一个用户对爱尝鲜福利的当前状态信息
*/
- (RACSignal *)getFreshWelfareStatusWithReqParameters:(PTGetFreshWelfareStatusReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取一个用户对爱尝鲜福利的当前状态信息
*/
- (RACSignal *)getFreshWelfareStatusWithReqParameters:(PTGetFreshWelfareStatusReqMessage *)reqParameters;
/**
  爱尝鲜福利统计报告
*/
- (RACSignal *)getFreshWelfareStatsReportWithReqParameters:(PTGetFreshWelfareStatsReportReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  爱尝鲜福利统计报告
*/
- (RACSignal *)getFreshWelfareStatsReportWithReqParameters:(PTGetFreshWelfareStatsReportReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
