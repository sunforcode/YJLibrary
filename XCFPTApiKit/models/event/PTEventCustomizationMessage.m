// apic_version = 0.5.5
#import "PTEventCustomizationMessage.h"
@implementation PTEventCustomizationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"homepageBanner": @"homepage_banner",@"detailBanner": @"detail_banner",@"homepageComponentsHidden": @"homepage_components_hidden",@"webBanner": @"web_banner",};
}
@end
