// apic_version = 0.5.5
#import "PTIsTargetInUserBoardsReqMessage.h"
@implementation PTIsTargetInUserBoardsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"user_id",@"targetId": @"target_id",@"targetType": @"target_type",};
}
@end
