// apic_version = 0.6.1
#import "PTListThemeEssaysRespMessage.h"
@implementation PTListThemeEssaysRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"waterfallEssays" : [PTWaterfallRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"waterfallEssays": @"waterfall_essays",@"cursor": @"cursor",};
}
@end
