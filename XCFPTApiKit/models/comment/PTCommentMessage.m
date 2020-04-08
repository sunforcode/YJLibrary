// apic_version = 0.5.5
#import "PTCommentMessage.h"
@implementation PTCommentMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"atUsers" : [PTUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"commentId": @"id",@"txt": @"txt",@"createTime": @"create_time",@"author": @"author",@"targetId": @"target_id",@"atUsers": @"at_users",};
}
@end
