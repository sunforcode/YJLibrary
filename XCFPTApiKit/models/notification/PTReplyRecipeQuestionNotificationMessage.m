// apic_version = 0.5.5
#import "PTReplyRecipeQuestionNotificationMessage.h"
@implementation PTReplyRecipeQuestionNotificationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationId": @"notification_id",@"sender": @"sender",@"receiver": @"receiver",@"createTime": @"create_time",@"recipeQuestion": @"recipe_question",@"isNotifiedByAt": @"is_notified_by_at",@"url": @"url",@"isValid": @"is_valid",@"status": @"status",};
}
@end
