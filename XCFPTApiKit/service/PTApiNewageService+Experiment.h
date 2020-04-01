// apic_version = 0.5.5
#import "PTApiNewageService.h"
#import "PTGetExperimentResultReqMessage.h"
#import "PTBatchGetExperimentResultsReqMessage.h"
#import "PTGetExperimentResultRespMessage.h"
#import "PTBatchGetExperimentResultsRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTApiNewageService (Experiment)
/**
  取 Jarvis 实验(分组)结果
*/
- (RACSignal *)getExperimentResultWithReqParameters:(PTGetExperimentResultReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  取 Jarvis 实验(分组)结果
*/
- (RACSignal *)getExperimentResultWithReqParameters:(PTGetExperimentResultReqMessage *)reqParameters;
/**
  取多个实验结果
*/
- (RACSignal *)batchGetExperimentResultsWithReqParameters:(PTBatchGetExperimentResultsReqMessage *)reqParameters
                                                             apiConfig:(nullable PTApiNewageConfig *)apiConfig;
/**
  取多个实验结果
*/
- (RACSignal *)batchGetExperimentResultsWithReqParameters:(PTBatchGetExperimentResultsReqMessage *)reqParameters;
@end
NS_ASSUME_NONNULL_END
