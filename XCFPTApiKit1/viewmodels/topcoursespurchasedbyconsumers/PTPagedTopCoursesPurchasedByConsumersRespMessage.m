// apic_version = 0.6.1
#import "PTPagedTopCoursesPurchasedByConsumersRespMessage.h"
@implementation PTPagedTopCoursesPurchasedByConsumersRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courses": @"courses",@"cursor": @"cursor",};
}
@end
