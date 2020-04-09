// apic_version = 0.6.1
#import "PTListThemeEssaysByHotRespMessage.h"
@implementation PTListThemeEssaysByHotRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"waterfallEssays" : [PTWaterfallRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"waterfallEssays": @"waterfall_essays",@"cursor": @"cursor",};
}
@end
