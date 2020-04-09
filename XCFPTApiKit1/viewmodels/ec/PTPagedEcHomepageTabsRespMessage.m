// apic_version = 0.6.1
#import "PTPagedEcHomepageTabsRespMessage.h"
@implementation PTPagedEcHomepageTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"cells": @"cells",};
}
@end
