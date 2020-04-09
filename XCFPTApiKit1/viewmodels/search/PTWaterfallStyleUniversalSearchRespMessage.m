// apic_version = 0.6.1
#import "PTWaterfallStyleUniversalSearchRespMessage.h"
@implementation PTWaterfallStyleUniversalSearchRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"targets" : [PTSearchTargetMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"targets": @"targets",};
}
@end
