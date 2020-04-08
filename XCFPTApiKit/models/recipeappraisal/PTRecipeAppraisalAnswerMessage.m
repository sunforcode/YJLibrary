// apic_version = 0.5.5
#import "PTRecipeAppraisalAnswerMessage.h"
@implementation PTRecipeAppraisalAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"appraisalAnswer": @"appraisal_answer",@"appraisalAnswerText": @"appraisal_answer_text",};
}
@end
