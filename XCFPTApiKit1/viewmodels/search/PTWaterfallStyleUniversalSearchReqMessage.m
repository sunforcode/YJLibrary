// apic_version = 0.6.1
#import "PTWaterfallStyleUniversalSearchReqMessage.h"
@implementation PTWaterfallStyleUniversalSearchReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"q": @"q",@"orderBy": @"order_by",@"onlyVideo": @"only_video",};
}
@end
