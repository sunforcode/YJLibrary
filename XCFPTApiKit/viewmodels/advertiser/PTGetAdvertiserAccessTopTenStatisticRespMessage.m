// apic_version = 0.5.5
#import "PTGetAdvertiserAccessTopTenStatisticRespMessage.h"
@implementation PTGetAdvertiserAccessTopTenStatisticRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"data" : [PTAdvertiserAccessTopTenStatisticMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"data": @"data",};
}
@end
