// apic_version = 0.5.5
#import "PTPkxRegisterPdidReqMessage.h"
@implementation PTPkxRegisterPdidReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"ctx": @"ctx",@"osVersion": @"os_version",@"data": @"data",};
}
@end
