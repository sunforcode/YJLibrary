// apic_version = 0.5.5
#import "PTGetAdvertiserKeywordStatisticRespMessage.h"
@implementation PTGetAdvertiserKeywordStatisticRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"data" : [PTAdvertiserKeywordStatisticMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"data": @"data",};
}
@end
