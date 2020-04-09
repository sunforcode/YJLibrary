// apic_version = 0.6.1
#import "PTPagedRecipeQuestionsV2ReqMessage.h"
@implementation PTPagedRecipeQuestionsV2ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
