// apic_version = 0.6.1
#import "PTAccountDeactivationApplicationMessage.h"
@implementation PTAccountDeactivationApplicationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"applicationId": @"id",@"reason": @"reason",@"status": @"status",};
}
@end
