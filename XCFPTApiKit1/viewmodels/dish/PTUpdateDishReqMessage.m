// apic_version = 0.6.1
#import "PTUpdateDishReqMessage.h"
@implementation PTUpdateDishReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"tagsInPic" : [PTDishPicTagMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title": @"title",@"dishId": @"dish_id",@"desc": @"desc",@"idents": @"idents",@"tagsInPic": @"tags_in_pic",@"videoInfo": @"video_info",@"sync": @"sync",};
}
@end
