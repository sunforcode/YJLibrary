// apic_version = 0.5.5
#import "PTSimilarQuestionMessage.h"
@implementation PTSimilarQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeQuestion": @"recipe_question",@"recipeQuestionAnswer": @"recipe_question_answer",};
}
@end
