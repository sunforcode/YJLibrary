// apic_version = 0.6.1
#import "PTQuestionnaireMessage.h"
@implementation PTQuestionnaireMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"questions" : [PTQuestionnaireQuestionMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionnaireId": @"questionnaire_id",@"questions": @"questions",};
}
@end
