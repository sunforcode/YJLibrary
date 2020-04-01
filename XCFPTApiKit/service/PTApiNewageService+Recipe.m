// apic_version = 0.5.5
#import "PTApiNewageService+Recipe.h"
@implementation PTApiNewageService (Recipe)
- (RACSignal *)showDiscoverRecipesWithReqParameters:(PTShowDiscoverRecipesReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"discover/recipes.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTShowDiscoverRecipesRespMessage.class
                         requestName:@"ShowDiscoverRecipes"
                           apiConfig:apiConfig];
}
- (RACSignal *)showDiscoverRecipesWithReqParameters:(PTShowDiscoverRecipesReqMessage *)reqParameters {
    return [self showDiscoverRecipesWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)recipePageMetaInfoWithReqParameters:(PTRecipePageMetaInfoReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipes/page_meta_info.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTRecipePageMetaInfoRespMessage.class
                         requestName:@"RecipePageMetaInfo"
                           apiConfig:apiConfig];
}
- (RACSignal *)recipePageMetaInfoWithReqParameters:(PTRecipePageMetaInfoReqMessage *)reqParameters {
    return [self recipePageMetaInfoWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getRecipeDishesOrderByTimeWithReqParameters:(PTGetRecipeDishesOrderByTimeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/dishes_order_by_time.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecipeDishesOrderByTimeRespMessage.class
                         requestName:@"GetRecipeDishesOrderByTime"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecipeDishesOrderByTimeWithReqParameters:(PTGetRecipeDishesOrderByTimeReqMessage *)reqParameters {
    return [self getRecipeDishesOrderByTimeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)pagedSimilarRecipeWithReqParameters:(PTPagedSimilarRecipeReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipes/paged_similar_recipes.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTPagedSimilarRecipeRespMessage.class
                         requestName:@"PagedSimilarRecipe"
                           apiConfig:apiConfig];
}
- (RACSignal *)pagedSimilarRecipeWithReqParameters:(PTPagedSimilarRecipeReqMessage *)reqParameters {
    return [self pagedSimilarRecipeWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)getRecipesByIngsWithReqParameters:(PTGetRecipesByIngsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"get_recipes_by_ings.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetRecipesByIngsRespMessage.class
                         requestName:@"GetRecipesByIngs"
                           apiConfig:apiConfig];
}
- (RACSignal *)getRecipesByIngsWithReqParameters:(PTGetRecipesByIngsReqMessage *)reqParameters {
    return [self getRecipesByIngsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
