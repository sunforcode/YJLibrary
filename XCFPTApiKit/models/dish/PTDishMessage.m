// apic_version = 0.5.5
#import "PTDishMessage.h"
@implementation PTDishMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"atUsers" : [PTUserMessage class],@"latestComments" : [PTCommentMessage class],@"extraImages" : [PTPictureDictMessage class],@"tagsInPic" : [PTDishPicTagMessage class],@"events" : [PTEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"dishId": @"id",@"name": @"name",@"createTime": @"create_time",@"humanFriendlyCreateTime": @"friendly_create_time",@"author": @"author",@"photo": @"photo",@"ident": @"ident",@"image": @"image",@"thumbnail": @"thumbnail",@"thumbnail160": @"thumbnail_160",@"thumbnail280": @"thumbnail_280",@"recipeId": @"recipe_id",@"isOrphan": @"is_orphan",@"url": @"url",@"diggedByMe": @"digged_by_me",@"nPics": @"npics",@"mainPic": @"main_pic",@"source": @"source",@"nDiggs": @"ndiggs",@"desc": @"desc",@"atUsers": @"at_users",@"nComments": @"ncomments",@"latestComments": @"latest_comments",@"extraImages": @"extra_images",@"tagsInPic": @"tags_in_pic",@"title": @"title",@"vodVideo": @"vod_video",@"events": @"events",};
}
@end
