// apic_version = 0.6.1
#import "PTRecipeAskQuestionReqMessage.h"
@implementation PTRecipeAskQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"text": @"text",};
}
@end
