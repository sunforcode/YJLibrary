// apic_version = 0.5.5
#import "PTRecipeQuestionAnswerV2Message.h"
@implementation PTRecipeQuestionAnswerV2Message
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"answerId": @"id",@"text": @"text",@"createTime": @"create_time",@"nDiggs": @"n_diggs",@"author": @"author",@"answeredUser": @"answered_user",@"diggedByMe": @"digged_by_me",};
}
@end
