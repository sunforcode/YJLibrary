// apic_version = 0.6.1
#import "PTVerticalSlipBannersCellMessage.h"
@implementation PTVerticalSlipBannersCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"banners" : [PTBannerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"banners": @"banners",};
}
@end
