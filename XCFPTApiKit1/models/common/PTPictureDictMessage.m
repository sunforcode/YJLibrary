// apic_version = 0.6.1
#import "PTPictureDictMessage.h"
@implementation PTPictureDictMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ident": @"ident",@"originalWidth": @"original_width",@"originalHeight": @"original_height",@"maxWidth": @"max_width",@"maxHeight": @"max_height",@"urlPattern": @"url_pattern",};
}
@end
