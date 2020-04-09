// apic_version = 0.6.1
#import "PTGetRecipeFeedsReqMessage.h"
@implementation PTGetRecipeFeedsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",};
}
@end
