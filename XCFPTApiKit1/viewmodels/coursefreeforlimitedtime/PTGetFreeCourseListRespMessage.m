// apic_version = 0.6.1
#import "PTGetFreeCourseListRespMessage.h"
@implementation PTGetFreeCourseListRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courses": @"courses",};
}
@end
