// apic_version = 0.6.1
#import "PTApiNewageService+Event.h"
@implementation PTApiNewageService (Event)
- (RACSignal *)getRecommendEventsWithReqParameters:(PTGetRecommendEventsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"events/recommend_events.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecommendEventsRespMessage.class
                         requestName:@"GetRecommendEvents"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecommendEventsWithReqParameters:(PTGetRecommendEventsReqMessage *)reqParameters {
    return [self getRecommendEventsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)listEventDishesWithReqParameters:(PTListEventDishesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"events/list_dishes.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTListEventDishesRespMessage.class
                         requestName:@"ListEventDishes"
                           apiConfig:apiConfig];
}
- (RACSignal *)listEventDishesWithReqParameters:(PTListEventDishesReqMessage *)reqParameters {
    return [self listEventDishesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedEventDishesOrderByTimeV5WithReqParameters:(PTPagedEventDishesOrderByTimeV5ReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"events/%@/dishes_order_by_time_v5.json", reqParameters.eventId];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedEventDishesOrderByTimeV5RespMessage.class
                         requestName:@"PagedEventDishesOrderByTimeV5"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedEventDishesOrderByTimeV5WithReqParameters:(PTPagedEventDishesOrderByTimeV5ReqMessage *)reqParameters {
    return [self pagedEventDishesOrderByTimeV5WithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedEpidemicEventDishesWithReqParameters:(PTPagedEpidemicEventDishesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"events/paged_epidemic_event_dishes.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedEpidemicEventDishesRespMessage.class
                         requestName:@"PagedEpidemicEventDishes"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedEpidemicEventDishesWithReqParameters:(PTPagedEpidemicEventDishesReqMessage *)reqParameters {
    return [self pagedEpidemicEventDishesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
