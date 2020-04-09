// apic_version = 0.6.1
#import "PTListThemesRespMessage.h"
@implementation PTListThemesRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"themes" : [PTThemeMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"themes": @"themes",@"cursor": @"cursor",};
}
@end
