// apic_version = 0.6.1
#import "PTListUserEssaysRespMessage.h"
@implementation PTListUserEssaysRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"essays" : [PTEssayMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essays": @"essays",@"cursor": @"cursor",};
}
@end
