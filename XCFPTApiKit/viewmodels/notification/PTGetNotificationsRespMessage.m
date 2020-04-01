// apic_version = 0.5.5
#import "PTGetNotificationsRespMessage.h"
@implementation PTGetNotificationsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"notifications" : [PTNotificationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"notifications": @"notifications",@"cursor": @"cursor",};
}
@end
