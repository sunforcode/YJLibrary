// apic_version = 0.5.5
#import "PTRecipeLabelMessage.h"
@implementation PTRecipeLabelMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"url": @"url",@"color": @"color",@"bgColor": @"bg_color",@"gradientBgColors": @"gradient_bg_colors",@"colorV2": @"color_v2",};
}
@end
