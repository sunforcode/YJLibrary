// apic_version = 0.6.1
#import "PTMarkTabAsReadReqMessage.h"
@implementation PTMarkTabAsReadReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tabId": @"tab_id",@"notificationId": @"notification_id",};
}
@end
