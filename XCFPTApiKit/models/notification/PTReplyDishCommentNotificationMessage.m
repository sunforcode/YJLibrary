// apic_version = 0.5.5
#import "PTReplyDishCommentNotificationMessage.h"
@implementation PTReplyDishCommentNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"dish": @"dish",@"comment": @"comment",@"isNotifiedByAt": @"is_notified_by_at",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
