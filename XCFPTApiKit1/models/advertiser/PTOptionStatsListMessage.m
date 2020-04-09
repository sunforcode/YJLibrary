// apic_version = 0.6.1
#import "PTOptionStatsListMessage.h"
@implementation PTOptionStatsListMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"stats" : [PTOptionStatsMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"stats": @"stats",@"date": @"date",};
}
@end
