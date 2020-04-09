// apic_version = 0.6.1
#import "PTListEventDishesReqMessage.h"
@implementation PTListEventDishesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"eventId": @"event_id",};
}
@end
