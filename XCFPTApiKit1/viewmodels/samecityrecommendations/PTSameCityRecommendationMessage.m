// apic_version = 0.6.1
#import "PTSameCityRecommendationMessage.h"
@implementation PTSameCityRecommendationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recommendContent": @"recommend_content",@"displayDistance": @"display_distance",@"tracking": @"tracking",@"title": @"title",@"sensorTracking": @"sensor_tracking",};
}
@end
