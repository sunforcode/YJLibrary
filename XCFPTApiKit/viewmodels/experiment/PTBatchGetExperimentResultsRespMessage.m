// apic_version = 0.5.5
#import "PTBatchGetExperimentResultsRespMessage.h"
@implementation PTBatchGetExperimentResultsRespMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"results" : [PTExperimentResultMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"results": @"results",};
}
@end
