// apic_version = 0.6.1
#import "PTPagedClassroomHomepageRecommendationsRespMessage.h"
@implementation PTPagedClassroomHomepageRecommendationsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"cells" : [PTHybridListCellMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"title": @"title",@"cursor": @"cursor",@"cells": @"cells",};
}
@end
