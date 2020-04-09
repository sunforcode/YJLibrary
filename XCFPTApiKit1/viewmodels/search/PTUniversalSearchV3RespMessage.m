// apic_version = 0.6.1
#import "PTUniversalSearchV3RespMessage.h"
@implementation PTUniversalSearchV3RespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cells": @"cells",@"cursor": @"cursor",};
}
@end
