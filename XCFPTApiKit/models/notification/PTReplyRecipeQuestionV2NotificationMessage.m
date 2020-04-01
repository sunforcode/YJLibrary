// apic_version = 0.5.5
#import "PTReplyRecipeQuestionV2NotificationMessage.h"
@implementation PTReplyRecipeQuestionV2NotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"url": @"url",@"question": @"question",@"answer": @"answer",@"isNotifiedByAt": @"is_notified_by_at",@"isValid": @"is_valid",@"status": @"status",};
}
@end
