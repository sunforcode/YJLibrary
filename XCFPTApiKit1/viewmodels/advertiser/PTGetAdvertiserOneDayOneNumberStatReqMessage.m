// apic_version = 0.6.1
#import "PTGetAdvertiserOneDayOneNumberStatReqMessage.h"
@implementation PTGetAdvertiserOneDayOneNumberStatReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"beginDate": @"begin_date",@"endDate": @"end_date",@"userId": @"user_id",@"statisticType": @"statistic_type",};
}
@end
