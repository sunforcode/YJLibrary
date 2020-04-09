// apic_version = 0.6.1
#import "PTGetCourseDishesOrderByTimeReqMessage.h"
@implementation PTGetCourseDishesOrderByTimeReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseId": @"course_id",@"dishId": @"dish_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
