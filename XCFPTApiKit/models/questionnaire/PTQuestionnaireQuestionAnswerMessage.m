// apic_version = 0.5.5
#import "PTQuestionnaireQuestionAnswerMessage.h"
@implementation PTQuestionnaireQuestionAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"answerId": @"answer_id",@"answer": @"answer",};
}
@end
