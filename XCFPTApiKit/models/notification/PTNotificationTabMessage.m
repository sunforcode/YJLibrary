// apic_version = 0.5.5
#import "PTNotificationTabMessage.h"
@implementation PTNotificationTabMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationTabId": @"notification_tab_id",@"name": @"name",@"icon": @"icon",@"nUnreadNotifications": @"n_unread_notifications",@"hasSettingButton": @"has_setting_button",};
}
@end
