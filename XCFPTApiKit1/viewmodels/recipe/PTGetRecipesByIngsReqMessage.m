// apic_version = 0.6.1
#import "PTGetRecipesByIngsReqMessage.h"
@implementation PTGetRecipesByIngsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ingredients": @"ingredients",@"isFastFood": @"is_fast_food",};
}
@end
