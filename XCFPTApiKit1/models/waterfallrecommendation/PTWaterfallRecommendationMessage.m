// apic_version = 0.6.1
#import "PTWaterfallRecommendationMessage.h"
@implementation PTWaterfallRecommendationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"extraImages" : [PTPictureDictMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"identification": @"identification",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"title3rd": @"title_3rd",@"title4th": @"title_4th",@"image": @"image",@"url": @"url",@"label": @"label",@"width": @"width",@"height": @"height",@"author": @"author",@"extra": @"extra",@"extraImages": @"extra_images",@"targetInfo": @"target_info",};
}
@end
