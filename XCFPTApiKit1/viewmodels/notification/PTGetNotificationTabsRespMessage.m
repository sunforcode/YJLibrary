// apic_version = 0.6.1
#import "PTGetNotificationTabsRespMessage.h"
@implementation PTGetNotificationTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"notificationTabs" : [PTNotificationTabMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notificationTabs": @"notification_tabs",@"lastOfficialNotification": @"last_official_notification",};
}
@end
