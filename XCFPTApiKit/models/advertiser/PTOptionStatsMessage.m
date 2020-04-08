// apic_version = 0.5.5
#import "PTOptionStatsMessage.h"
@implementation PTOptionStatsMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"optionId": @"option_id",@"optionDesc": @"option_desc",@"precentValue": @"precent_value",};
}
@end
