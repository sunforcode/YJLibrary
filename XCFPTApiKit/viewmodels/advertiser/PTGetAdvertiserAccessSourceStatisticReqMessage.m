// apic_version = 0.5.5
#import "PTGetAdvertiserAccessSourceStatisticReqMessage.h"
@implementation PTGetAdvertiserAccessSourceStatisticReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"beginDate": @"begin_date",@"endDate": @"end_date",@"recipeId": @"recipe_id",};
}
@end
