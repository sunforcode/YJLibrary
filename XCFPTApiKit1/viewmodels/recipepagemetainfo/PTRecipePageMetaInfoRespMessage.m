// apic_version = 0.6.1
#import "PTRecipePageMetaInfoRespMessage.h"
@implementation PTRecipePageMetaInfoRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"title": @"title",@"desc": @"desc",@"keywords": @"keywords",};
}
@end
