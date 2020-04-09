// apic_version = 0.6.1
#import "PTClassroomTabMessage.h"
@implementation PTClassroomTabMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"name": @"name",@"title": @"title",@"weight": @"weight",@"courses": @"courses",@"extraParam": @"extra_param",};
}
@end
