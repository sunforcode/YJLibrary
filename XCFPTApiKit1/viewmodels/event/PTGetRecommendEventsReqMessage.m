// apic_version = 0.6.1
#import "PTGetRecommendEventsReqMessage.h"
@implementation PTGetRecommendEventsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"timezone": @"timezone",};
}
@end
