// apic_version = 0.5.5
#import "PTGetRecipeFeedsRespMessage.h"
@implementation PTGetRecipeFeedsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipeFeeds" : [PTRecipeFeedV1Message class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"recipeFeeds": @"recipe_feeds",};
}
@end
