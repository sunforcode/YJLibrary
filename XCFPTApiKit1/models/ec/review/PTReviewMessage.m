// apic_version = 0.6.1
#import "PTReviewMessage.h"
@implementation PTReviewMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"additionalReviewPhotos" : [PTPictureDictMessage class],@"additionalReviewImages" : [PTPictureDictMessage class],@"photos" : [PTPictureDictMessage class],@"images" : [PTPictureDictMessage class],@"latestComments" : [PTCommentMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"reviewId": @"id",@"goodsId": @"goods_id",@"commodity": @"commodity",@"review": @"review",@"additionalReview": @"additional_review",@"additionalReviewCreateTime": @"additional_review_create_time",@"additionalReviewPhotos": @"additional_review_photos",@"additionalReviewImages": @"additional_review_images",@"shopReply": @"shop_reply",@"rate": @"rate",@"isEssential": @"is_essential",@"author": @"author",@"createTime": @"create_time",@"humanFriendlyCreateTime": @"friendly_create_time",@"url": @"url",@"photos": @"photos",@"images": @"images",@"isPublished": @"is_published",@"latestComments": @"latest_comments",@"ncomments": @"ncomments",@"diggedByMe": @"digged_by_me",@"ndiggs": @"ndiggs",@"diggUsers": @"digg_users",@"type": @"type",};
}
@end
