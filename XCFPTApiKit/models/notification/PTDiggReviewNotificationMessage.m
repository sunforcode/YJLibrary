// apic_version = 0.5.5
#import "PTDiggReviewNotificationMessage.h"
@implementation PTDiggReviewNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"review": @"review",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
