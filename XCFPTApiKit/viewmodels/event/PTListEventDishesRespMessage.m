// apic_version = 0.5.5
#import "PTListEventDishesRespMessage.h"
@implementation PTListEventDishesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"waterfallDishes" : [PTWaterfallRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"waterfallDishes": @"waterfall_dishes",@"cursor": @"cursor",};
}
@end
