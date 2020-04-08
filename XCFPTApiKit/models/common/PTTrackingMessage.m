// apic_version = 0.5.5
#import "PTTrackingMessage.h"
@implementation PTTrackingMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"xcfClickUrls": @"xcf_click_urls",@"thirdPartyClickUrls": @"third_party_click_urls",@"xcfExposeUrls": @"xcf_expose_urls",@"thirdPartyExposeUrls": @"third_party_expose_urls",};
}
@end
