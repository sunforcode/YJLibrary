// apic_version = 0.6.1
#import "PTGetMyCoursesStatisticsRespMessage.h"
@implementation PTGetMyCoursesStatisticsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"total": @"total",@"learnedCount": @"learned_count",@"dishSubmittedCount": @"dish_submitted_count",@"ratedCount": @"rated_count",};
}
@end
