// apic_version = 0.5.5
#import "PTSearchMyCoursesReqMessage.h"
@implementation PTSearchMyCoursesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"q": @"q",@"cursor": @"cursor",@"size": @"size",};
}
@end
