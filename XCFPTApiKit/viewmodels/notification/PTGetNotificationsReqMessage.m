// apic_version = 0.5.5
#import "PTGetNotificationsReqMessage.h"
@implementation PTGetNotificationsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tabId": @"tab_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
