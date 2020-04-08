// apic_version = 0.5.5
#import "PTIngredientParagraphMessage.h"
@implementation PTIngredientParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"ingredients" : [PTIngredientMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ingredients": @"ingredients",};
}
@end
