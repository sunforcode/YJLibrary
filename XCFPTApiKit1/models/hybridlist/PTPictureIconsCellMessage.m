// apic_version = 0.6.1
#import "PTPictureIconsCellMessage.h"
@implementation PTPictureIconsCellMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"icons" : [PTPictureIconMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"icons": @"icons",@"moreIcon": @"more_icon",};
}
@end
