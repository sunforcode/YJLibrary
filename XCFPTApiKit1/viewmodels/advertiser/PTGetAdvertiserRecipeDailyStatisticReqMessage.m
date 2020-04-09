// apic_version = 0.6.1
#import "PTGetAdvertiserRecipeDailyStatisticReqMessage.h"
@implementation PTGetAdvertiserRecipeDailyStatisticReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"recipeId": @"recipe_id",};
}
@end
