// apic_version = 0.6.1
#import "PTGetFeedsPageRecommendationUsersRespMessage.h"
@implementation PTGetFeedsPageRecommendationUsersRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recommendationUsers" : [PTRecommendationUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recommendationUsers": @"recommendation_users",};
}
@end
