// apic_version = 0.6.1
#import "PTAnswerFreshWelfareQuestionnaireReqMessage.h"
@implementation PTAnswerFreshWelfareQuestionnaireReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"questionAnswers" : [PTQuestionnaireQuestionAnswerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionnaireId": @"questionnaire_id",@"questionAnswers": @"question_answers",};
}
@end
