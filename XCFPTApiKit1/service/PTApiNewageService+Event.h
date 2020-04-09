// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTGetRecommendEventsReqMessage.h"
#import "PTListEventDishesReqMessage.h"
#import "PTPagedEventDishesOrderByTimeV5ReqMessage.h"
#import "PTPagedEpidemicEventDishesReqMessage.h"
#import "PTGetRecommendEventsRespMessage.h"
#import "PTListEventDishesRespMessage.h"
#import "PTPagedEventDishesOrderByTimeV5RespMessage.h"
#import "PTPagedEpidemicEventDishesRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Event)
/**
  获取推荐event列表
*/
- (RACSignal *)getRecommendEventsWithReqParameters:(PTGetRecommendEventsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取推荐event列表
*/
- (RACSignal *)getRecommendEventsWithReqParameters:(PTGetRecommendEventsReqMessage *)reqParameters;
/**
  获取大类列表
*/
- (RACSignal *)listEventDishesWithReqParameters:(PTListEventDishesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取大类列表
*/
- (RACSignal *)listEventDishesWithReqParameters:(PTListEventDishesReqMessage *)reqParameters;
/**
  按时间顺序获取话题的作品列表 v5
*/
- (RACSignal *)pagedEventDishesOrderByTimeV5WithReqParameters:(PTPagedEventDishesOrderByTimeV5ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  按时间顺序获取话题的作品列表 v5
*/
- (RACSignal *)pagedEventDishesOrderByTimeV5WithReqParameters:(PTPagedEventDishesOrderByTimeV5ReqMessage *)reqParameters;
/**
  疫情活动页获取作品列表
*/
- (RACSignal *)pagedEpidemicEventDishesWithReqParameters:(PTPagedEpidemicEventDishesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  疫情活动页获取作品列表
*/
- (RACSignal *)pagedEpidemicEventDishesWithReqParameters:(PTPagedEpidemicEventDishesReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
