// apic_version = 0.5.5
#import "PTGetRecommendEventsRespMessage.h"
@implementation PTGetRecommendEventsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"events" : [PTEventMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"events": @"events",@"cursor": @"cursor",};
}
@end
