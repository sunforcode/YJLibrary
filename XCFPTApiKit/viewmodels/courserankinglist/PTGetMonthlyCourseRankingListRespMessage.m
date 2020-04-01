// apic_version = 0.5.5
#import "PTGetMonthlyCourseRankingListRespMessage.h"
@implementation PTGetMonthlyCourseRankingListRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"monthlyRankingList" : [PTMonthlyRankingListMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"monthlyRankingList": @"monthly_ranking_list",};
}
@end
