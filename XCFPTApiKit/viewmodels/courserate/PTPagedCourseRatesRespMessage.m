// apic_version = 0.5.5
#import "PTPagedCourseRatesRespMessage.h"
@implementation PTPagedCourseRatesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"rates" : [PTCourseRateMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"rates": @"rates",@"cursor": @"cursor",};
}
@end
