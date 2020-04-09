// apic_version = 0.6.1
#import "PTSearchPageRecommendationKeywordsRespMessage.h"
@implementation PTSearchPageRecommendationKeywordsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"keywords" : [PTSearchPageRecommendationKeywordMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"keywords": @"keywords",};
}
@end
