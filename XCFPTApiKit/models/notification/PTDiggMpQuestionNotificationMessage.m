// apic_version = 0.5.5
#import "PTDiggMpQuestionNotificationMessage.h"
@implementation PTDiggMpQuestionNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"mpQuestion": @"mp_question",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
