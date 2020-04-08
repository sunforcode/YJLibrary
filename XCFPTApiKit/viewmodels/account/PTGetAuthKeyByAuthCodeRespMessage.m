// apic_version = 0.5.5
#import "PTGetAuthKeyByAuthCodeRespMessage.h"
@implementation PTGetAuthKeyByAuthCodeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"authKey": @"auth_key",@"isUserExist": @"is_user_exist",};
}
@end
