// apic_version = 0.5.5
#import "PTListThemesV2RespMessage.h"
@implementation PTListThemesV2RespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"themes" : [PTThemeMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"themes": @"themes",@"cursor": @"cursor",};
}
@end
