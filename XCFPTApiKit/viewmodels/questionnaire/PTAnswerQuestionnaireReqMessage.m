// apic_version = 0.5.5
#import "PTAnswerQuestionnaireReqMessage.h"
@implementation PTAnswerQuestionnaireReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionnaireId": @"questionnaire_id",@"questionId": @"question_id",@"answerId": @"answer_id",@"recipeId": @"recipe_id",};
}
@end
