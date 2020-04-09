// apic_version = 0.6.1
#import "PTGetAdvertiserAccessSourceStatisticRespMessage.h"
@implementation PTGetAdvertiserAccessSourceStatisticRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"data" : [PTAdvertiserSourceCountStatisticMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"data": @"data",};
}
@end
