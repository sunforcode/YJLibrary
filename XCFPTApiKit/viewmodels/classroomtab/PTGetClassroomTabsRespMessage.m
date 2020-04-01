// apic_version = 0.5.5
#import "PTGetClassroomTabsRespMessage.h"
@implementation PTGetClassroomTabsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"tabs" : [PTClassroomTabMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"tabs": @"tabs",};
}
@end
