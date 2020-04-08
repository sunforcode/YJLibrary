// apic_version = 0.5.5
#import "PTPagedHomepageDiscoverTabRecommendationsRespMessage.h"
@implementation PTPagedHomepageDiscoverTabRecommendationsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cells": @"cells",@"cursor": @"cursor",};
}
@end
