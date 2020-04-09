// apic_version = 0.6.1
#import "PTGetTagHotCoursesRespMessage.h"
@implementation PTGetTagHotCoursesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"tagCourses" : [PTCoursesWithTagMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tagCourses": @"tag_courses",};
}
@end
