// apic_version = 0.6.1
#import "PTParagraphMessage.h"
@implementation PTParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"textParagraph": @"text_paragraph",@"imageParagraph": @"image_paragraph",@"microVideoParagraph": @"micro_video_paragraph",@"vodVideoParagraph": @"vod_video_paragraph",@"ingredientParagraph": @"ingredient_paragraph",};
}
@end
