// apic_version = 0.6.1
#import "PTPagedRecipeQuestionAnswersRespMessage.h"
@implementation PTPagedRecipeQuestionAnswersRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"answers" : [PTRecipeQuestionAnswerV2Message class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answers": @"answers",@"cursor": @"cursor",};
}
@end
