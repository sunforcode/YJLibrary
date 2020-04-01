// apic_version = 0.5.5
#import "PTGetAdvertiserDataStatisticReqMessage.h"
@implementation PTGetAdvertiserDataStatisticReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",};
}
@end
