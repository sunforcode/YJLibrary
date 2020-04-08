// apic_version = 0.5.5
#import "PTPagedCoursesBySectionRespMessage.h"
@implementation PTPagedCoursesBySectionRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courses": @"courses",@"cursor": @"cursor",};
}
@end
