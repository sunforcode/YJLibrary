// apic_version = 0.5.5
#import "PTListThemeEssaysRespMessage.h"
@implementation PTListThemeEssaysRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"waterfallEssays" : [PTWaterfallRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"waterfallEssays": @"waterfall_essays",@"cursor": @"cursor",};
}
@end
