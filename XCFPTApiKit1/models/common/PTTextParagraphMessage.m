// apic_version = 0.6.1
#import "PTTextParagraphMessage.h"
@implementation PTTextParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"html": @"html",@"maxLines": @"max_lines",@"markupText": @"markup_text",};
}
@end
