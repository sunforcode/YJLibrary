// apic_version = 0.6.1
#import "PTGetAuthKeyByAuthCodeRespMessage.h"
@implementation PTGetAuthKeyByAuthCodeRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"authKey": @"auth_key",@"isUserExist": @"is_user_exist",};
}
@end
