// apic_version = 0.5.5
#import "PTPagedEcHomepageRecommendationsRespMessage.h"
@implementation PTPagedEcHomepageRecommendationsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"cells": @"cells",@"title": @"title",};
}
@end
