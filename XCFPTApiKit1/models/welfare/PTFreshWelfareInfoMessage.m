// apic_version = 0.6.1
#import "PTFreshWelfareInfoMessage.h"
@implementation PTFreshWelfareInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"lastReportTime": @"last_report_time",@"alter": @"alter",@"status": @"status",};
}
@end
