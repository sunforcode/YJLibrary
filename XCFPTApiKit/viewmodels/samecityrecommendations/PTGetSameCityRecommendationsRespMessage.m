// apic_version = 0.5.5
#import "PTGetSameCityRecommendationsRespMessage.h"
@implementation PTGetSameCityRecommendationsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recommendations" : [PTSameCityRecommendationMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recommendations": @"recommendations",@"cursor": @"cursor",};
}
@end
