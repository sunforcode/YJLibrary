// apic_version = 0.5.5
#import "PTDiggEssayNotificationMessage.h"
@implementation PTDiggEssayNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"essay": @"essay",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
