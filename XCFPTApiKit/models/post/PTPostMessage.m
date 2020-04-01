// apic_version = 0.5.5
#import "PTPostMessage.h"
@implementation PTPostMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"postId": @"id",@"title": @"title",@"image": @"image",@"url": @"url",@"desc": @"desc",@"upTime": @"up_time",@"visits": @"visits",@"isUp": @"is_up",@"isTitleDescHidden": @"is_title_desc_hidden",@"createTime": @"create_time",@"updateTime": @"update_time",@"nQuestions": @"n_questions",@"author": @"author",@"content": @"content",};
}
@end
