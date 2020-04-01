// apic_version = 0.5.5
#import "PTAdvertiserAccessTopTenStatisticMessage.h"
@implementation PTAdvertiserAccessTopTenStatisticMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"recipes" : [PTRecipeMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipes": @"recipes",@"date": @"date",};
}
@end
