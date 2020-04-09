// apic_version = 0.6.1
#import "PTTextConditionMessage.h"
@implementation PTTextConditionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"greater": @"greater",@"less": @"less",};
}
@end
