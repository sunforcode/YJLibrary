// apic_version = 0.5.5
#import "PTFreshWelfareInfoMessage.h"
@implementation PTFreshWelfareInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"lastReportTime": @"last_report_time",@"alter": @"alter",@"status": @"status",};
}
@end
