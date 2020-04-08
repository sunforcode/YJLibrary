// apic_version = 0.5.5
#import "PTPagedSimilarEssayRespMessage.h"
@implementation PTPagedSimilarEssayRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"essays" : [PTSimilarEssayMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essays": @"essays",@"cursor": @"cursor",};
}
@end
