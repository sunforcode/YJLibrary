// apic_version = 0.6.1
#import "PTApiNewageService+ShareRecipe.h"
@implementation PTApiNewageService (ShareRecipe)
- (RACSignal *)getShareRecipeTitleWithReqParameters:(PTGetShareRecipeTitleReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"recipe/get_share_recipe_title.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetShareRecipeTitleRespMessage.class
                         requestName:@"GetShareRecipeTitle"
                           apiConfig:apiConfig];
}
- (RACSignal *)getShareRecipeTitleWithReqParameters:(PTGetShareRecipeTitleReqMessage *)reqParameters {
    return [self getShareRecipeTitleWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
