// apic_version = 0.5.5
#import "PTCommentReviewNotificationMessage.h"
@implementation PTCommentReviewNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"review": @"review",@"comment": @"comment",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
