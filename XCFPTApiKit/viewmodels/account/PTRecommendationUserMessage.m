// apic_version = 0.5.5
#import "PTRecommendationUserMessage.h"
@implementation PTRecommendationUserMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"user": @"user",@"reason": @"reason",@"reasonTail": @"reason_tail",};
}
@end
