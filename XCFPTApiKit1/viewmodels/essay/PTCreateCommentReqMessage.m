// apic_version = 0.6.1
#import "PTCreateCommentReqMessage.h"
@implementation PTCreateCommentReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"essayId": @"essay_id",@"text": @"text",@"atUserIds": @"at_user_ids",};
}
@end
