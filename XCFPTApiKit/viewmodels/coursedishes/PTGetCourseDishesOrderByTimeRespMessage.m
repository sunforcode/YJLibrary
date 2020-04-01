// apic_version = 0.5.5
#import "PTGetCourseDishesOrderByTimeRespMessage.h"
@implementation PTGetCourseDishesOrderByTimeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"dishes" : [PTDishMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"dishes": @"dishes",@"cursor": @"cursor",@"tip": @"tip",};
}
@end
