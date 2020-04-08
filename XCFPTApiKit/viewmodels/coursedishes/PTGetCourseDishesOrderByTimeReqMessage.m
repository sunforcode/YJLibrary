// apic_version = 0.5.5
#import "PTGetCourseDishesOrderByTimeReqMessage.h"
@implementation PTGetCourseDishesOrderByTimeReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseId": @"course_id",@"dishId": @"dish_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
