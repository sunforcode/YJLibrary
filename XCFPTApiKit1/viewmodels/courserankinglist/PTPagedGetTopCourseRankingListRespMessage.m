// apic_version = 0.6.1
#import "PTPagedGetTopCourseRankingListRespMessage.h"
@implementation PTPagedGetTopCourseRankingListRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courses": @"courses",@"cursor": @"cursor",};
}
@end
