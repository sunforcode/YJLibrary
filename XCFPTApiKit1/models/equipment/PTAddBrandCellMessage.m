// apic_version = 0.6.1
#import "PTAddBrandCellMessage.h"
@implementation PTAddBrandCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"isShow": @"is_show",@"text": @"text",@"image": @"image",};
}
@end
