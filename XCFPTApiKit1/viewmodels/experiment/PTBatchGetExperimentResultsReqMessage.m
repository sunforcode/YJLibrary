// apic_version = 0.6.1
#import "PTBatchGetExperimentResultsReqMessage.h"
@implementation PTBatchGetExperimentResultsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"units" : [PTGetExperimentResultReqMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"units": @"units",};
}
@end
