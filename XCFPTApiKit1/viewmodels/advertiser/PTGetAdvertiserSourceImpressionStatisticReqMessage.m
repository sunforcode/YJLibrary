// apic_version = 0.6.1
#import "PTGetAdvertiserSourceImpressionStatisticReqMessage.h"
@implementation PTGetAdvertiserSourceImpressionStatisticReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"recipeId": @"recipe_id",};
}
@end
