// apic_version = 0.5.5
#import "PTMonthlyRankingListMessage.h"
@implementation PTMonthlyRankingListMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"courses" : [PTCourseMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"yearMonth": @"year_month",@"courses": @"courses",};
}
@end
