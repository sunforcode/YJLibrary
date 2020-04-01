// apic_version = 0.5.5
#import "PTPagedClassroomHomepageTabsRespMessage.h"
@implementation PTPagedClassroomHomepageTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"cells": @"cells",};
}
@end
