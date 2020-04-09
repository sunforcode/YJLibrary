// apic_version = 0.6.1
#import "PTAskQuestionReqMessage.h"
@implementation PTAskQuestionReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"text": @"text",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
