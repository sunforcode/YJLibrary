// apic_version = 0.5.5
#import "PTAnswerQuestionReqMessage.h"
@implementation PTAnswerQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"answerId": @"answer_id",@"text": @"text",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
