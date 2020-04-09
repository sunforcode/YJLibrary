// apic_version = 0.6.1
#import "PTShowDiscoverRecipesReqMessage.h"
@implementation PTShowDiscoverRecipesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
