// apic_version = 0.6.1
#import "PTHeaderMessage.h"
@implementation PTHeaderMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"sign": @"X-XCF-SIGN",@"pdid": @"X-XCF-PDID",@"psid": @"X-XCF-PSID",@"userAgent": @"User-Agent",@"network": @"X-XCF-NETWORK",};
}
@end
