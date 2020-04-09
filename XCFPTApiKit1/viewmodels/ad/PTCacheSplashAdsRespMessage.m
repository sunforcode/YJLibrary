// apic_version = 0.6.1
#import "PTCacheSplashAdsRespMessage.h"
@implementation PTCacheSplashAdsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"splashAds" : [PTADMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"splashAds": @"splash_ads",};
}
@end
