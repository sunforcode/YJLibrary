// apic_version = 0.6.1
#import "PTPagedEventDishesOrderByTimeV5ReqMessage.h"
@implementation PTPagedEventDishesOrderByTimeV5ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"eventId": @"event_id",};
}
@end
