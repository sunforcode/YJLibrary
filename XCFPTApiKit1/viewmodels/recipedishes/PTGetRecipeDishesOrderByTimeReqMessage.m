// apic_version = 0.6.1
#import "PTGetRecipeDishesOrderByTimeReqMessage.h"
@implementation PTGetRecipeDishesOrderByTimeReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"dishId": @"dish_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
