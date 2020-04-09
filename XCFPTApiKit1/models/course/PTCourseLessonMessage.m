// apic_version = 0.6.1
#import "PTCourseLessonMessage.h"
@implementation PTCourseLessonMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseLessonId": @"id",@"name": @"name",@"length": @"length",@"beginTime": @"begin_time",@"sampleVideoEnable": @"sample_video_enable",@"desc": @"desc",@"process": @"process",@"status": @"status",};
}
@end
