// apic_version = 0.6.1
#import "PTRecipeFeedV1Message.h"
@implementation PTRecipeFeedV1Message
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"author": @"author",@"recipeId": @"recipe_id",};
}
@end
