// apic_version = 0.5.5
#import "PTGetMonthlyCourseRankingListReqMessage.h"
@implementation PTGetMonthlyCourseRankingListReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"yearMonth": @"year_month",@"rankingListName": @"ranking_list_name",};
}
@end
