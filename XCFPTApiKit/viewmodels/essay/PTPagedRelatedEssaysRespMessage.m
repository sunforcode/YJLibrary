// apic_version = 0.5.5
#import "PTPagedRelatedEssaysRespMessage.h"
@implementation PTPagedRelatedEssaysRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"essays" : [PTRelatedEssayMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essays": @"essays",@"cursor": @"cursor",};
}
@end
