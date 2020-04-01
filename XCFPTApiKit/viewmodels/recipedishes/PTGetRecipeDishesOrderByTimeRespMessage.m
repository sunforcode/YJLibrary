// apic_version = 0.5.5
#import "PTGetRecipeDishesOrderByTimeRespMessage.h"
@implementation PTGetRecipeDishesOrderByTimeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"dishes" : [PTDishMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"dishes": @"dishes",@"cursor": @"cursor",@"tip": @"tip",};
}
@end
