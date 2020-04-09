// apic_version = 0.6.1
#import "PTGetRecipeDishesOrderByTimeRespMessage.h"
@implementation PTGetRecipeDishesOrderByTimeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"dishes" : [PTDishMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"dishes": @"dishes",@"cursor": @"cursor",@"tip": @"tip",};
}
@end
