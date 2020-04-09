// apic_version = 0.6.1
#import "PTRecipeQuestionMessage.h"
@implementation PTRecipeQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"questionId": @"id",@"text": @"text",@"nDiggs": @"n_diggs",@"author": @"author",@"createTime": @"create_time",@"updateTime": @"update_time",@"diggedByMe": @"digged_by_me",@"answer": @"answer",@"recipe": @"recipe",};
}
@end
