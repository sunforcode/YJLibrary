// apic_version = 0.5.5
#import "PTTextConditionMessage.h"
@implementation PTTextConditionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"greater": @"greater",@"less": @"less",};
}
@end
