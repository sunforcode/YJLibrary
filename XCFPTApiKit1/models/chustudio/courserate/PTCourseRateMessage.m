// apic_version = 0.6.1
#import "PTCourseRateMessage.h"
@implementation PTCourseRateMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"rate": @"rate",@"createTime": @"create_time",@"review": @"review",@"user": @"user",};
}
@end
