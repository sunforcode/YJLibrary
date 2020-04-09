// apic_version = 0.6.1
#import "PTApiNewageService+Experiment.h"
@implementation PTApiNewageService (Experiment)
- (RACSignal *)getExperimentResultWithReqParameters:(PTGetExperimentResultReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"experiment/result.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTGetExperimentResultRespMessage.class
                         requestName:@"GetExperimentResult"
                           apiConfig:apiConfig];
}
- (RACSignal *)getExperimentResultWithReqParameters:(PTGetExperimentResultReqMessage *)reqParameters {
    return [self getExperimentResultWithReqParameters:reqParameters
                                        apiConfig:nil];
}
- (RACSignal *)batchGetExperimentResultsWithReqParameters:(PTBatchGetExperimentResultsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig {
    NSString *url = [[NSString alloc] initWithFormat:@"experiment/batch_results.json"];
    return [self rac_StartWithParams:reqParameters
                          requestUrl:url
                         resultClass:PTBatchGetExperimentResultsRespMessage.class
                         requestName:@"BatchGetExperimentResults"
                           apiConfig:apiConfig];
}
- (RACSignal *)batchGetExperimentResultsWithReqParameters:(PTBatchGetExperimentResultsReqMessage *)reqParameters {
    return [self batchGetExperimentResultsWithReqParameters:reqParameters
                                        apiConfig:nil];
}
@end
