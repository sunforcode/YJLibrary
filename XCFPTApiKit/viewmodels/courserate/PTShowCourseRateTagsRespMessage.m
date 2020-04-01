// apic_version = 0.5.5
#import "PTShowCourseRateTagsRespMessage.h"
@implementation PTShowCourseRateTagsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"tags" : [PTCourseRateTagMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tags": @"tags",};
}
@end
