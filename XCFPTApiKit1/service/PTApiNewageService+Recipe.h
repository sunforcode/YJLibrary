// apic_version = 0.6.1
#import "PTApiNewageService.h"
#import "PTShowDiscoverRecipesReqMessage.h"
#import "PTRecipePageMetaInfoReqMessage.h"
#import "PTGetRecipeDishesOrderByTimeReqMessage.h"
#import "PTPagedSimilarRecipeReqMessage.h"
#import "PTGetRecipesByIngsReqMessage.h"
#import "PTShowDiscoverRecipesRespMessage.h"
#import "PTRecipePageMetaInfoRespMessage.h"
#import "PTGetRecipeDishesOrderByTimeRespMessage.h"
#import "PTPagedSimilarRecipeRespMessage.h"
#import "PTGetRecipesByIngsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Recipe)
/**
  菜谱发现
*/
- (RACSignal *)showDiscoverRecipesWithReqParameters:(PTShowDiscoverRecipesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱发现
*/
- (RACSignal *)showDiscoverRecipesWithReqParameters:(PTShowDiscoverRecipesReqMessage *)reqParameters;
/**
  百度小程序 -- web 化获取 TDK
*/
- (RACSignal *)recipePageMetaInfoWithReqParameters:(PTRecipePageMetaInfoReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  百度小程序 -- web 化获取 TDK
*/
- (RACSignal *)recipePageMetaInfoWithReqParameters:(PTRecipePageMetaInfoReqMessage *)reqParameters;
/**
  菜谱下的作品列表(可以上下翻页并且第一次请求可以指定第一个作品的id)
*/
- (RACSignal *)getRecipeDishesOrderByTimeWithReqParameters:(PTGetRecipeDishesOrderByTimeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  菜谱下的作品列表(可以上下翻页并且第一次请求可以指定第一个作品的id)
*/
- (RACSignal *)getRecipeDishesOrderByTimeWithReqParameters:(PTGetRecipeDishesOrderByTimeReqMessage *)reqParameters;
/**
  获取相似的菜谱
*/
- (RACSignal *)pagedSimilarRecipeWithReqParameters:(PTPagedSimilarRecipeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取相似的菜谱
*/
- (RACSignal *)pagedSimilarRecipeWithReqParameters:(PTPagedSimilarRecipeReqMessage *)reqParameters;
/**
  获取生成的菜单
*/
- (RACSignal *)getRecipesByIngsWithReqParameters:(PTGetRecipesByIngsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  获取生成的菜单
*/
- (RACSignal *)getRecipesByIngsWithReqParameters:(PTGetRecipesByIngsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
