// apic_version = 0.5.5
#import "PTReplyRecipeQuestionAnswerNotificationMessage.h"
@implementation PTReplyRecipeQuestionAnswerNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"url": @"url",@"senderAnswer": @"sender_answer",@"receiverAnswer": @"receiver_answer",@"question": @"question",@"isNotifiedByAt": @"is_notified_by_at",@"isValid": @"is_valid",@"status": @"status",};
}
@end
