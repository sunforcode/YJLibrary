// apic_version = 0.5.5
#import "PTPagedUserTargetsReqMessage.h"
@implementation PTPagedUserTargetsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"cursor": @"cursor",@"size": @"size",@"targetType": @"target_type",};
}
@end
