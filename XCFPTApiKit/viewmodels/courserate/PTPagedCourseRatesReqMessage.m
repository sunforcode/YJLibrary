// apic_version = 0.5.5
#import "PTPagedCourseRatesReqMessage.h"
@implementation PTPagedCourseRatesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseId": @"course_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
