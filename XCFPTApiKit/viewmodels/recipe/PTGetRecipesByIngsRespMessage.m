// apic_version = 0.5.5
#import "PTGetRecipesByIngsRespMessage.h"
@implementation PTGetRecipesByIngsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipes" : [PTRecipeMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipes": @"recipes",};
}
@end
