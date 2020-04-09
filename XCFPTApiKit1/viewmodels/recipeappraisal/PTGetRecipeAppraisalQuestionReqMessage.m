// apic_version = 0.6.1
#import "PTGetRecipeAppraisalQuestionReqMessage.h"
@implementation PTGetRecipeAppraisalQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"isLabelQuestion": @"is_label_question",};
}
@end
