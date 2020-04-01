// apic_version = 0.5.5
#import "PTVerticalSlipBannersCellMessage.h"
@implementation PTVerticalSlipBannersCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"banners" : [PTBannerMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"banners": @"banners",};
}
@end
