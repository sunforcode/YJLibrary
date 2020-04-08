// apic_version = 0.5.5
#import "PTWelfareViewMessage.h"
@implementation PTWelfareViewMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"independentWelfareView": @"independent_welfare_view",@"dependentWelfareView": @"dependent_welfare_view",};
}
@end
