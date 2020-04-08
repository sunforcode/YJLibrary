// apic_version = 0.5.5
#import "PTGetMyCoursesRespMessage.h"
@implementation PTGetMyCoursesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"courses": @"courses",};
}
@end
