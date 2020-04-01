// apic_version = 0.5.5
#import "PTCollectRecipeNotificationMessage.h"
@implementation PTCollectRecipeNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"recipe": @"recipe",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
