// apic_version = 0.5.5
#import "PTImageParagraphMessage.h"
@implementation PTImageParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"height": @"height",@"width": @"width",@"title": @"title",@"url": @"url",@"pictureInfo": @"picture_info",};
}
@end
