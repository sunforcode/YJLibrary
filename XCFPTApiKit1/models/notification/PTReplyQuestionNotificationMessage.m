// apic_version = 0.6.1
#import "PTReplyQuestionNotificationMessage.h"
@implementation PTReplyQuestionNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"question": @"question",@"answer": @"answer",@"url": @"url",@"isNotifiedByAt": @"is_notified_by_at",@"isValid": @"is_valid",@"status": @"status",};
}
@end
