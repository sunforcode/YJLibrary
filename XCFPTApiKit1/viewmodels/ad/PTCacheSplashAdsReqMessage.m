// apic_version = 0.6.1
#import "PTCacheSplashAdsReqMessage.h"
@implementation PTCacheSplashAdsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"imeiMd5": @"imei_md5",@"idfa": @"idfa",@"macMd5": @"mac_md5",@"osVersion": @"os_version",@"width": @"width",@"height": @"height",@"oaid": @"oaid",@"network": @"network",};
}
@end
