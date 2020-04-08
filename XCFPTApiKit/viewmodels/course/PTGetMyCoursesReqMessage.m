// apic_version = 0.5.5
#import "PTGetMyCoursesReqMessage.h"
@implementation PTGetMyCoursesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"filter": @"filter",};
}
@end
