// apic_version = 0.6.1
#import "PTGetCourseTagRespMessage.h"
@implementation PTGetCourseTagRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"childTags" : [PTCourseTagMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tag": @"tag",@"childTags": @"child_tags",};
}
@end
