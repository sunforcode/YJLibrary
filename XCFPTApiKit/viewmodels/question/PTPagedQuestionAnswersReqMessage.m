// apic_version = 0.5.5
#import "PTPagedQuestionAnswersReqMessage.h"
@implementation PTPagedQuestionAnswersReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"cursor": @"cursor",@"size": @"size",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
