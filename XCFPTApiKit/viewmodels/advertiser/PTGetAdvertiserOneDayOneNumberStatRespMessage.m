// apic_version = 0.5.5
#import "PTGetAdvertiserOneDayOneNumberStatRespMessage.h"
@implementation PTGetAdvertiserOneDayOneNumberStatRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"statistics" : [PTOneDayOneNumberStatisticMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"statistics": @"statistics",};
}
@end
