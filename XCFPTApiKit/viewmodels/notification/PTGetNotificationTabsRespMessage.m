// apic_version = 0.5.5
#import "PTGetNotificationTabsRespMessage.h"
@implementation PTGetNotificationTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"notificationTabs" : [PTNotificationTabMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationTabs": @"notification_tabs",@"lastOfficialNotification": @"last_official_notification",};
}
@end
