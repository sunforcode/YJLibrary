// apic_version = 0.6.1
#import "PTReplyShopReviewNotificationMessage.h"
@implementation PTReplyShopReviewNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"review": @"review",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
