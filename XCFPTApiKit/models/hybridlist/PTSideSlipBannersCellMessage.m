// apic_version = 0.5.5
#import "PTSideSlipBannersCellMessage.h"
@implementation PTSideSlipBannersCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"banners" : [PTBannerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"banners": @"banners",};
}
@end
