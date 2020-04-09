// apic_version = 0.6.1
#import "PTPagedGetDiggEssayUsersRespMessage.h"
@implementation PTPagedGetDiggEssayUsersRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"users" : [PTUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"users": @"users",@"cursor": @"cursor",};
}
@end
