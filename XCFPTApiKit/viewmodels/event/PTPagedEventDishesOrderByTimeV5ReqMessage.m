// apic_version = 0.5.5
#import "PTPagedEventDishesOrderByTimeV5ReqMessage.h"
@implementation PTPagedEventDishesOrderByTimeV5ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"eventId": @"event_id",};
}
@end
