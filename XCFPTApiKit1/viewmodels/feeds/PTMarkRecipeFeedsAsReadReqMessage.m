// apic_version = 0.6.1
#import "PTMarkRecipeFeedsAsReadReqMessage.h"
@implementation PTMarkRecipeFeedsAsReadReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"authorId": @"author_id",@"recipeId": @"recipe_id",};
}
@end
