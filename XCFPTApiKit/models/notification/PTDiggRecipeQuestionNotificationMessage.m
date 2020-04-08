// apic_version = 0.5.5
#import "PTDiggRecipeQuestionNotificationMessage.h"
@implementation PTDiggRecipeQuestionNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"question": @"question",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
