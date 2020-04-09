// apic_version = 0.6.1
#import "PTListThemeEssaysByTimeRespMessage.h"
@implementation PTListThemeEssaysByTimeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"waterfallEssays" : [PTWaterfallRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"waterfallEssays": @"waterfall_essays",@"cursor": @"cursor",};
}
@end
