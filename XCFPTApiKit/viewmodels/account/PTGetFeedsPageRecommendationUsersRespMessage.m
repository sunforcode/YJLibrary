// apic_version = 0.5.5
#import "PTGetFeedsPageRecommendationUsersRespMessage.h"
@implementation PTGetFeedsPageRecommendationUsersRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recommendationUsers" : [PTRecommendationUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recommendationUsers": @"recommendation_users",};
}
@end
