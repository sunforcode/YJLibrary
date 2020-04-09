// apic_version = 0.6.1
#import "PTUndiggQuestionReqMessage.h"
@implementation PTUndiggQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
