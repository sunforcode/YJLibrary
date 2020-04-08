// apic_version = 0.5.5
#import "PTFeedsMessage.h"
@implementation PTFeedsMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"targetId": @"target_id",@"url": @"url",@"identification": @"identification",@"targetType": @"target_type",};
}
@end
