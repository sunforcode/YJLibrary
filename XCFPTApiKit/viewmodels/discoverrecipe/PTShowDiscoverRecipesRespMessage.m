// apic_version = 0.5.5
#import "PTShowDiscoverRecipesRespMessage.h"
@implementation PTShowDiscoverRecipesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipes" : [PTRecipeMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipes": @"recipes",@"cursor": @"cursor",};
}
@end
