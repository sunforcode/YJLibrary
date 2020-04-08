// apic_version = 0.5.5
#import "PTOneDayOneNumberStatisticMessage.h"
@implementation PTOneDayOneNumberStatisticMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"itemData" : [PTOneDayOneNumberStatisticDataMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"statisticName": @"statistic_name",@"itemData": @"item_data",};
}
@end
