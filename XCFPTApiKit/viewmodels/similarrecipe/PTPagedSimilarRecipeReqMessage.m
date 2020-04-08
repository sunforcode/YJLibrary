// apic_version = 0.5.5
#import "PTPagedSimilarRecipeReqMessage.h"
@implementation PTPagedSimilarRecipeReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"cursor": @"cursor",@"size": @"size",@"refer": @"refer",};
}
@end
