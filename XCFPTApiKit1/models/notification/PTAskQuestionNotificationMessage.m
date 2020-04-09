// apic_version = 0.6.1
#import "PTAskQuestionNotificationMessage.h"
@implementation PTAskQuestionNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"question": @"question",@"isNotifiedByAt": @"is_notified_by_at",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
