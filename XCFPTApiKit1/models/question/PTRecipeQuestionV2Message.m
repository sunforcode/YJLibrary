// apic_version = 0.6.1
#import "PTRecipeQuestionV2Message.h"
@implementation PTRecipeQuestionV2Message
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"answers" : [PTRecipeQuestionAnswerV2Message class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"id",@"text": @"text",@"nDiggs": @"n_diggs",@"author": @"author",@"createTime": @"create_time",@"diggedByMe": @"digged_by_me",@"answers": @"answers",@"nAnswers": @"n_answers",@"recipe": @"recipe",};
}
@end
