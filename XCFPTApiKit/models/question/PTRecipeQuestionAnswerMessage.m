// apic_version = 0.5.5
#import "PTRecipeQuestionAnswerMessage.h"
@implementation PTRecipeQuestionAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"createTime": @"create_time",@"author": @"author",@"answerId": @"id",};
}
@end
