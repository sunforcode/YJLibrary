// apic_version = 0.5.5
#import "PTGetAdvertiserSourceImpressionStatisticRespMessage.h"
@implementation PTGetAdvertiserSourceImpressionStatisticRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"data" : [PTAdvertiserSourceCountStatisticMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"data": @"data",};
}
@end
