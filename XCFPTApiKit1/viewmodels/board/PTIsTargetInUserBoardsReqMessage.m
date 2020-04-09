// apic_version = 0.6.1
#import "PTIsTargetInUserBoardsReqMessage.h"
@implementation PTIsTargetInUserBoardsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
