// apic_version = 0.6.1
#import "PTReplyQuestionAnswerNotificationMessage.h"
@implementation PTReplyQuestionAnswerNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"senderAnswer": @"sender_answer",@"receiverAnswer": @"receiver_answer",@"url": @"url",@"question": @"question",@"isNotifiedByAt": @"is_notified_by_at",@"isValid": @"is_valid",@"status": @"status",};
}
@end
