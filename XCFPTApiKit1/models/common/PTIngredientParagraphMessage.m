// apic_version = 0.6.1
#import "PTIngredientParagraphMessage.h"
@implementation PTIngredientParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"ingredients" : [PTIngredientMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ingredients": @"ingredients",};
}
@end
