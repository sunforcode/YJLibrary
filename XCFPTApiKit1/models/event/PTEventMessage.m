// apic_version = 0.6.1
#import "PTEventMessage.h"
@implementation PTEventMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"eventId": @"id",@"name": @"name",@"author": @"author",@"isPromoted": @"is_promoted",@"desc": @"desc",@"nDishes": @"n_dishes",@"url": @"url",@"nPv": @"n_pv",@"customization": @"customization",};
}
@end
