// apic_version = 0.5.5
#import "PTInstructionMessage.h"
@implementation PTInstructionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"step": @"step",@"text": @"text",@"ident": @"ident",@"video": @"video",@"url": @"url",@"photo800": @"photo800",@"image": @"image",};
}
@end
