// apic_version = 0.5.5
#import "PTDeleteQuestionReqMessage.h"
@implementation PTDeleteQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
