// apic_version = 0.5.5
#import "PTTextParagraphMessage.h"
@implementation PTTextParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"html": @"html",@"maxLines": @"max_lines",@"markupText": @"markup_text",};
}
@end
