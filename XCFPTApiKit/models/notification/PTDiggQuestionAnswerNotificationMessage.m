// apic_version = 0.5.5
#import "PTDiggQuestionAnswerNotificationMessage.h"
@implementation PTDiggQuestionAnswerNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"question": @"question",@"questionAnswer": @"question_answer",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
