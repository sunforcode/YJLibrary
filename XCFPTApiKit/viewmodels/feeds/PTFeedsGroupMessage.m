// apic_version = 0.5.5
#import "PTFeedsGroupMessage.h"
@implementation PTFeedsGroupMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"feeds" : [PTFeedsMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"author": @"author",@"feeds": @"feeds",};
}
@end
