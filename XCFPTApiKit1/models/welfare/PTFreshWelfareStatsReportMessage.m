// apic_version = 0.6.1
#import "PTFreshWelfareStatsReportMessage.h"
@implementation PTFreshWelfareStatsReportMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"genderSummary" : [PTSummaryMessage class],@"ageSummary" : [PTSummaryMessage class],@"areaSummary" : [PTSummaryMessage class],@"economicSummary" : [PTSummaryMessage class],@"rankSummary" : [PTSummaryMessage class],@"appearanceRankSummary" : [PTSummaryMessage class],@"innerRankSummary" : [PTSummaryMessage class],@"economicRankSummary" : [PTSummaryMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"goodsName": @"goods_name",@"totalUser": @"total_user",@"nDays": @"n_days",@"reportNumber": @"report_number",@"genderSummary": @"gender_summary",@"ageSummary": @"age_summary",@"areaSummary": @"area_summary",@"economicSummary": @"economic_summary",@"rankSummary": @"rank_summary",@"appearanceRankSummary": @"appearance_rank_summary",@"innerRankSummary": @"inner_rank_summary",@"economicRankSummary": @"economic_rank_summary",@"detailDownloadUrl": @"detail_download_url",@"userCommentsDownloadUrl": @"user_comments_download_url",};
}
@end
