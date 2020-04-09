// apic_version = 0.6.1
#import "PTPagedUserCollectedEssaysReqMessage.h"
@implementation PTPagedUserCollectedEssaysReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
