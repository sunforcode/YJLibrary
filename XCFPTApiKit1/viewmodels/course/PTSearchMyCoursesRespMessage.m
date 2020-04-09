// apic_version = 0.6.1
#import "PTSearchMyCoursesRespMessage.h"
@implementation PTSearchMyCoursesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"courses": @"courses",};
}
@end
