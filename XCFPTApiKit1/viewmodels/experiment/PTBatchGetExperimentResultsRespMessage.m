// apic_version = 0.6.1
#import "PTBatchGetExperimentResultsRespMessage.h"
@implementation PTBatchGetExperimentResultsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"results" : [PTExperimentResultMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"results": @"results",};
}
@end
