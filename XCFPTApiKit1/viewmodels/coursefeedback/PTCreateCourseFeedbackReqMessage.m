// apic_version = 0.6.1
#import "PTCreateCourseFeedbackReqMessage.h"
@implementation PTCreateCourseFeedbackReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseId": @"course_id",@"lessonId": @"lesson_id",@"playUrl": @"play_url",@"problem": @"problem",@"feedback": @"feedback",@"usageEnvironment": @"usage_environment",@"channel": @"channel",};
}
@end
