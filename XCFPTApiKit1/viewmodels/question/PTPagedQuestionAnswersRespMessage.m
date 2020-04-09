// apic_version = 0.6.1
#import "PTPagedQuestionAnswersRespMessage.h"
@implementation PTPagedQuestionAnswersRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"answers" : [PTQuestionAnswerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answers": @"answers",@"cursor": @"cursor",};
}
@end
