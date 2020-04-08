// apic_version = 0.5.5
#import "PTQuestionMessage.h"
@implementation PTQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"answers" : [PTQuestionAnswerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"id",@"text": @"text",@"nDiggs": @"n_diggs",@"author": @"author",@"createTime": @"create_time",@"diggedByMe": @"digged_by_me",@"answers": @"answers",@"nAnswers": @"n_answers",@"target": @"target",};
}
@end
