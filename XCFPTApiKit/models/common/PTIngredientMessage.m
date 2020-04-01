// apic_version = 0.5.5
#import "PTIngredientMessage.h"
@implementation PTIngredientMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"name": @"name",@"amount": @"amount",@"cat": @"cat",};
}
@end
