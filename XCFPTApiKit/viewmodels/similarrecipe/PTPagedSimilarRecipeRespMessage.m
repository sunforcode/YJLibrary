// apic_version = 0.5.5
#import "PTPagedSimilarRecipeRespMessage.h"
@implementation PTPagedSimilarRecipeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipes" : [PTSimilarRecipeMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipes": @"recipes",@"cursor": @"cursor",};
}
@end
