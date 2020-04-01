// apic_version = 0.5.5
#import "PTGetExperimentResultRespMessage.h"
@implementation PTGetExperimentResultRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"group": @"group",@"experiment": @"experiment",@"fullGroups": @"full_groups",@"fullExperiments": @"full_experiments",@"groupExtraParams": @"group_extra_params",};
}
@end
