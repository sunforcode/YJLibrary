// apic_version = 0.6.1
#import "PTTargetInfoMessage.h"
@implementation PTTargetInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
