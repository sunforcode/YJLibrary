// apic_version = 0.6.1
#import "PTPagedGetTagCoursesReqMessage.h"
@implementation PTPagedGetTagCoursesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tagId": @"tag_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
