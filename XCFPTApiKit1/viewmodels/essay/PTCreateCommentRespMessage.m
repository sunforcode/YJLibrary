// apic_version = 0.6.1
#import "PTCreateCommentRespMessage.h"
@implementation PTCreateCommentRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"isSuccess": @"is_success",@"comment": @"comment",};
}
@end
