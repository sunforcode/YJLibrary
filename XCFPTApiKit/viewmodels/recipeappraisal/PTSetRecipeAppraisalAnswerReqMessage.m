// apic_version = 0.5.5
#import "PTSetRecipeAppraisalAnswerReqMessage.h"
@implementation PTSetRecipeAppraisalAnswerReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"recipe_id",@"recipeAppraisalTypeId": @"recipe_appraisal_type_id",@"recipeAppraisalAnswer": @"recipe_appraisal_answer",@"stage": @"stage",};
}
@end
