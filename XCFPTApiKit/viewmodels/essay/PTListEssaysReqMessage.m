// apic_version = 0.5.5
#import "PTListEssaysReqMessage.h"
@implementation PTListEssaysReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",};
}
@end
