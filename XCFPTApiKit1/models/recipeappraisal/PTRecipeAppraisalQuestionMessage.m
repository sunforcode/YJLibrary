// apic_version = 0.6.1
#import "PTRecipeAppraisalQuestionMessage.h"
@implementation PTRecipeAppraisalQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipeAppraisalAnswer" : [PTRecipeAppraisalAnswerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeAppraisalQuestionText": @"recipe_appraisal_question_text",@"recipeAppraisalAnswer": @"recipe_appraisal_answer",@"stage": @"stage",@"recipeAppraisalTypeId": @"recipe_appraisal_type_id",};
}
@end
