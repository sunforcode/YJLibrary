// apic_version = 0.6.1
#import "PTPagedEventDishesOrderByTimeV5RespMessage.h"
@implementation PTPagedEventDishesOrderByTimeV5RespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cells": @"cells",@"cursor": @"cursor",};
}
@end
