// apic_version = 0.6.1
#import "PTDiggRecipeQuestionAnswerNotificationMessage.h"
@implementation PTDiggRecipeQuestionAnswerNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"answer": @"answer",@"url": @"url",@"question": @"question",@"isValid": @"is_valid",@"status": @"status",};
}
@end
