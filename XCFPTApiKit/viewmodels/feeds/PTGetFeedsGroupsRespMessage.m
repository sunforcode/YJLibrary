// apic_version = 0.5.5
#import "PTGetFeedsGroupsRespMessage.h"
@implementation PTGetFeedsGroupsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"feedsGroups" : [PTFeedsGroupMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"feedsGroups": @"feeds_groups",};
}
@end
