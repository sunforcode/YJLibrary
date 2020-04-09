// apic_version = 0.6.1
#import "PTApiNewageService+Dish.h"
@implementation PTApiNewageService (Dish)
- (RACSignal *)updateDishWithReqParameters:(PTUpdateDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"dishes/update.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUpdateDishRespMessage.class
                         requestName:@"UpdateDish"
                           apiConfig:apiConfig];
}
- (RACSignal *)updateDishWithReqParameters:(PTUpdateDishReqMessage *)reqParameters {
    return [self updateDishWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)canUpdateDishWithReqParameters:(PTCanUpdateDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"dishes/can_update.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCanUpdateDishRespMessage.class
                         requestName:@"CanUpdateDish"
                           apiConfig:apiConfig];
}
- (RACSignal *)canUpdateDishWithReqParameters:(PTCanUpdateDishReqMessage *)reqParameters {
    return [self canUpdateDishWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)collectDishWithReqParameters:(PTCollectDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"dishes/collect_dish.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTCollectDishRespMessage.class
                         requestName:@"CollectDish"
                           apiConfig:apiConfig];
}
- (RACSignal *)collectDishWithReqParameters:(PTCollectDishReqMessage *)reqParameters {
    return [self collectDishWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)uncollectDishWithReqParameters:(PTUncollectDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"dishes/uncollect_dish.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTUncollectDishRespMessage.class
                         requestName:@"UncollectDish"
                           apiConfig:apiConfig];
}
- (RACSignal *)uncollectDishWithReqParameters:(PTUncollectDishReqMessage *)reqParameters {
    return [self uncollectDishWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedUserCollectedDishesWithReqParameters:(PTPagedUserCollectedDishesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"dishes/paged_user_collected_dishes.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedUserCollectedDishesRespMessage.class
                         requestName:@"PagedUserCollectedDishes"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedUserCollectedDishesWithReqParameters:(PTPagedUserCollectedDishesReqMessage *)reqParameters {
    return [self pagedUserCollectedDishesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
