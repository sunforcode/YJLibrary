// apic_version = 0.6.1
#import "PTPagedRelatedEssaysReqMessage.h"
@implementation PTPagedRelatedEssaysReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"essayId": @"essay_id",@"essayType": @"essay_type",};
}
@end
