// apic_version = 0.5.5
#import "PTPagedEpidemicEventDishesRespMessage.h"
@implementation PTPagedEpidemicEventDishesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"dishes" : [PTDishMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"dishes": @"dishes",@"cursor": @"cursor",};
}
@end
