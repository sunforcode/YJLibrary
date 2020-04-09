// apic_version = 0.6.1
#import "PTRecipeAppraisalAnswerMessage.h"
@implementation PTRecipeAppraisalAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"appraisalAnswer": @"appraisal_answer",@"appraisalAnswerText": @"appraisal_answer_text",};
}
@end
