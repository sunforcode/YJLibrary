// apic_version = 0.6.1
#import "PTPagedUserCollectedDishesRespMessage.h"
@implementation PTPagedUserCollectedDishesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recommends" : [PTWaterfallRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recommends": @"recommends",@"cursor": @"cursor",};
}
@end
