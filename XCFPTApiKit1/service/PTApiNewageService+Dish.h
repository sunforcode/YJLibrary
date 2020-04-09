// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTUpdateDishReqMessage.h"
#import "PTCanUpdateDishReqMessage.h"
#import "PTCollectDishReqMessage.h"
#import "PTUncollectDishReqMessage.h"
#import "PTPagedUserCollectedDishesReqMessage.h"
#import "PTUpdateDishRespMessage.h"
#import "PTCanUpdateDishRespMessage.h"
#import "PTCollectDishRespMessage.h"
#import "PTUncollectDishRespMessage.h"
#import "PTPagedUserCollectedDishesRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Dish)
/**
  查看是否可以更新作品
*/
- (RACSignal *)updateDishWithReqParameters:(PTUpdateDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看是否可以更新作品
*/
- (RACSignal *)updateDishWithReqParameters:(PTUpdateDishReqMessage *)reqParameters;
/**
  查看是否可以更新作品
*/
- (RACSignal *)canUpdateDishWithReqParameters:(PTCanUpdateDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  查看是否可以更新作品
*/
- (RACSignal *)canUpdateDishWithReqParameters:(PTCanUpdateDishReqMessage *)reqParameters;
/**
  作品收藏
*/
- (RACSignal *)collectDishWithReqParameters:(PTCollectDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  作品收藏
*/
- (RACSignal *)collectDishWithReqParameters:(PTCollectDishReqMessage *)reqParameters;
- (RACSignal *)uncollectDishWithReqParameters:(PTUncollectDishReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
- (RACSignal *)uncollectDishWithReqParameters:(PTUncollectDishReqMessage *)reqParameters;
/**
*/
- (RACSignal *)pagedUserCollectedDishesWithReqParameters:(PTPagedUserCollectedDishesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
*/
- (RACSignal *)pagedUserCollectedDishesWithReqParameters:(PTPagedUserCollectedDishesReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
