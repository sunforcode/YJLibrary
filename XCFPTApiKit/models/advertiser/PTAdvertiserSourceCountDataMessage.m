// apic_version = 0.5.5
#import "PTAdvertiserSourceCountDataMessage.h"
@implementation PTAdvertiserSourceCountDataMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"sourceName": @"source_name",@"count": @"count",};
}
@end
