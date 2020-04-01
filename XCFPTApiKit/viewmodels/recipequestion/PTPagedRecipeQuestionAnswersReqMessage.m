// apic_version = 0.5.5
#import "PTPagedRecipeQuestionAnswersReqMessage.h"
@implementation PTPagedRecipeQuestionAnswersReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"question_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
