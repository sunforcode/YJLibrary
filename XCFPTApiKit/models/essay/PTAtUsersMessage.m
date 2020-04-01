// apic_version = 0.5.5
#import "PTAtUsersMessage.h"
@implementation PTAtUsersMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"users" : [PTUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"users": @"users",};
}
@end
