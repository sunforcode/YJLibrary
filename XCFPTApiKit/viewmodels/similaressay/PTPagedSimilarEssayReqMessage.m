// apic_version = 0.5.5
#import "PTPagedSimilarEssayReqMessage.h"
@implementation PTPagedSimilarEssayReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essayId": @"essay_id",@"cursor": @"cursor",@"size": @"size",};
}
@end
