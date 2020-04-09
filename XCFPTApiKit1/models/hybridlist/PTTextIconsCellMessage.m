// apic_version = 0.6.1
#import "PTTextIconsCellMessage.h"
@implementation PTTextIconsCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"icons" : [PTTextIconMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"icons": @"icons",@"moreIcon": @"more_icon",};
}
@end
