// apic_version = 0.6.1
#import "PTAnswerRecipeQuestionV2ReqMessage.h"
@implementation PTAnswerRecipeQuestionV2ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"answerId": @"answer_id",@"text": @"text",};
}
@end
