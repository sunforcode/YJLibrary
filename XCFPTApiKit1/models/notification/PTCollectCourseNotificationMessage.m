// apic_version = 0.6.1
#import "PTCollectCourseNotificationMessage.h"
@implementation PTCollectCourseNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"course": @"course",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
