// apic_version = 0.5.5
#import "PTModel.h"
#import "PTGetExperimentResultReqMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTBatchGetExperimentResultsReqMessage : PTModel
@property (nonatomic, strong) NSArray<PTGetExperimentResultReqMessage *> *units;
@end
NS_ASSUME_NONNULL_END
