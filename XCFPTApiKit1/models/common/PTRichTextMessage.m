// apic_version = 0.6.1
#import "PTRichTextMessage.h"
@implementation PTRichTextMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"paras" : [PTParagraphMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"paras": @"paras",};
}
@end
