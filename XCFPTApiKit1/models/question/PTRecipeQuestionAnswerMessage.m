// apic_version = 0.6.1
#import "PTRecipeQuestionAnswerMessage.h"
@implementation PTRecipeQuestionAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"createTime": @"create_time",@"author": @"author",@"answerId": @"id",};
}
@end
