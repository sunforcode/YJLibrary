// apic_version = 0.6.1
#import "PTPagedUserCollectedDishesReqMessage.h"
@implementation PTPagedUserCollectedDishesReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
