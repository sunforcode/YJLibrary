// apic_version = 0.6.1
#import "PTUserUsageEnvironmentMessage.h"
@implementation PTUserUsageEnvironmentMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"pingInfos" : [PTNetworkInfoMessage class],@"dnsInfos" : [PTNetworkInfoMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"model": @"model",@"osVersion": @"os_version",@"pingInfos": @"ping_infos",@"dnsInfos": @"dns_infos",@"networkSignal": @"network_signal",@"networkCarrier": @"network_carrier",};
}
@end
