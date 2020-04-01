// apic_version = 0.5.5
#import "PTEssayMessage.h"
@implementation PTEssayMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"paras" : [PTParagraphMessage class],@"images" : [PTPictureDictMessage class],@"themes" : [PTThemeMessage class],@"atUsers" : [PTAtUsersMessage class],@"titleAtUsers" : [PTUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essayId": @"essay_id",@"title": @"title",@"createTime": @"create_time",@"updateTime": @"update_time",@"paras": @"paras",@"images": @"images",@"author": @"author",@"url": @"url",@"nDiggs": @"n_diggs",@"nComment": @"n_comment",@"nCollect": @"n_collect",@"isCollectByMe": @"is_collect_by_me",@"isDiggedByMe": @"is_digged_by_me",@"themes": @"themes",@"nPv": @"n_pv",@"atUsers": @"at_users",@"titleAtUsers": @"title_at_users",@"essayType": @"essay_type",};
}
@end
