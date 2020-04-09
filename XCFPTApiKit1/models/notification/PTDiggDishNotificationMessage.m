// apic_version = 0.6.1
#import "PTDiggDishNotificationMessage.h"
@implementation PTDiggDishNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"dish": @"dish",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
