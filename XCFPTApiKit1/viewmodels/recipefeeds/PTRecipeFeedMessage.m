// apic_version = 0.6.1
#import "PTRecipeFeedMessage.h"
@implementation PTRecipeFeedMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"author": @"author",@"recipeIds": @"recipe_ids",};
}
@end
