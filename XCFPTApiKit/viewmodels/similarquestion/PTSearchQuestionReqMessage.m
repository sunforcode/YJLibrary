// apic_version = 0.5.5
#import "PTSearchQuestionReqMessage.h"
@implementation PTSearchQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"keyword": @"keyword",@"cursor": @"cursor",@"size": @"size",};
}
@end
