// apic_version = 0.6.1
#import "PTPagedGetTopCourseRankingListReqMessage.h"
@implementation PTPagedGetTopCourseRankingListReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"rankingListName": @"ranking_list_name",@"cursor": @"cursor",@"size": @"size",};
}
@end
