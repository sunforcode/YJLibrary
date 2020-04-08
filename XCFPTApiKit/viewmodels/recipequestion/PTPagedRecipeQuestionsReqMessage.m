// apic_version = 0.5.5
#import "PTPagedRecipeQuestionsReqMessage.h"
@implementation PTPagedRecipeQuestionsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
