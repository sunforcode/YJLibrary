// apic_version = 0.5.5
#import "PTPagedTopCoursesPurchasedByConsumersReqMessage.h"
@implementation PTPagedTopCoursesPurchasedByConsumersReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseId": @"course_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
