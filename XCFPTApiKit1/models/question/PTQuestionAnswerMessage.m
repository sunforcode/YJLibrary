// apic_version = 0.6.1
#import "PTQuestionAnswerMessage.h"
@implementation PTQuestionAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answerId": @"id",@"text": @"text",@"createTime": @"create_time",@"nDiggs": @"n_diggs",@"author": @"author",@"answeredUser": @"answered_user",@"diggedByMe": @"digged_by_me",};
}
@end
