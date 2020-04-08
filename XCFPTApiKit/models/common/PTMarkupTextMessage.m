// apic_version = 0.5.5
#import "PTMarkupTextMessage.h"
@implementation PTMarkupTextMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"markups" : [PTMarkupMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"markups": @"markups",@"text": @"text",};
}
@end
