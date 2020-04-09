// apic_version = 0.6.1
#import "PTCursorMessage.h"
@implementation PTCursorMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"next": @"next",@"prev": @"prev",@"hasNext": @"has_next",@"hasPrev": @"has_prev",};
}
@end
