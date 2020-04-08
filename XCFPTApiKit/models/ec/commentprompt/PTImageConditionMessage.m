// apic_version = 0.5.5
#import "PTImageConditionMessage.h"
@implementation PTImageConditionMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"greater": @"greater",@"less": @"less",};
}
@end
