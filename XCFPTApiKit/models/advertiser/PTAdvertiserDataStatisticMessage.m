// apic_version = 0.5.5
#import "PTAdvertiserDataStatisticMessage.h"
@implementation PTAdvertiserDataStatisticMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"nFollowers": @"n_followers",@"nRecipes": @"n_recipes",@"nRecipePv": @"n_recipe_pv",@"nRecipeCollections": @"n_recipe_collections",@"nRecipeDishes": @"n_recipe_dishes",@"date": @"date",@"nRecipeShares": @"n_recipe_shares",};
}
@end
