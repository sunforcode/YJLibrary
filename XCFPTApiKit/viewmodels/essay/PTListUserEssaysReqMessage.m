// apic_version = 0.5.5
#import "PTListUserEssaysReqMessage.h"
@implementation PTListUserEssaysReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
