// apic_version = 0.6.1
#import "PTPagedQuestionsReqMessage.h"
@implementation PTPagedQuestionsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"targetId": @"target_id",@"cursor": @"cursor",@"size": @"size",@"targetType": @"target_type",};
}
@end
