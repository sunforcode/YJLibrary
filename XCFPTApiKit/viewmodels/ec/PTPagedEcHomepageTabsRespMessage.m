// apic_version = 0.5.5
#import "PTPagedEcHomepageTabsRespMessage.h"
@implementation PTPagedEcHomepageTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"cells": @"cells",};
}
@end
