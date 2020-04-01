// apic_version = 0.5.5
#import "PTEssayCommentMessage.h"
@implementation PTEssayCommentMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"atUsers" : [PTUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essayCommentId": @"essay_comment_id",@"text": @"text",@"createTime": @"create_time",@"author": @"author",@"atUsers": @"at_users",@"essayId": @"essay_id",};
}
@end
