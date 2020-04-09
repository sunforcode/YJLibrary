// apic_version = 0.6.1
#import "PTMpQuestionAnswerMessage.h"
@implementation PTMpQuestionAnswerMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"author": @"author",@"createTime": @"create_time",@"updateTime": @"update_time",@"mpAnswerId": @"id",};
}
@end
