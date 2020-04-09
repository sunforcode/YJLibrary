// apic_version = 0.6.1
#import "PTPagedGetTagCoursesRespMessage.h"
@implementation PTPagedGetTagCoursesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courses": @"courses",@"cursor": @"cursor",};
}
@end
