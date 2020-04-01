// apic_version = 0.5.5
#import "PTGetRecipeFeedsV2RespMessage.h"
@implementation PTGetRecipeFeedsV2RespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipeFeeds" : [PTRecipeFeedMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeFeeds": @"recipe_feeds",};
}
@end
