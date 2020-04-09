// apic_version = 0.6.1
#import "PTPagedCoursesBySectionReqMessage.h"
@implementation PTPagedCoursesBySectionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"section": @"section",@"cursor": @"cursor",@"size": @"size",};
}
@end
