// apic_version = 0.5.5
#import "PTBoardMessage.h"
@implementation PTBoardMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"images" : [PTPictureDictMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"boardId": @"id",@"title": @"title",@"desc": @"desc",@"author": @"author",@"createTime": @"create_time",@"updateTime": @"update_time",@"status": @"status",@"statusText": @"status_text",@"nCollects": @"n_collects",@"nRecipes": @"n_recipes",@"images": @"images",};
}
@end
