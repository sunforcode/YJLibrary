// apic_version = 0.5.5
#import "PTMpQuestionMessage.h"
@implementation PTMpQuestionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"mpQuestionId": @"id",@"text": @"text",@"nDiggs": @"n_diggs",@"author": @"author",@"createTime": @"create_time",@"updateTime": @"update_time",@"diggedByMe": @"digged_by_me",@"answer": @"answer",@"post": @"post",};
}
@end
