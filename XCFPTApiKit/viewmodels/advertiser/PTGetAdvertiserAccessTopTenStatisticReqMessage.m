// apic_version = 0.5.5
#import "PTGetAdvertiserAccessTopTenStatisticReqMessage.h"
@implementation PTGetAdvertiserAccessTopTenStatisticReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",};
}
@end
