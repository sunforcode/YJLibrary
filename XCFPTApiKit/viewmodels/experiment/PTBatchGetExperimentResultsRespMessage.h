// apic_version = 0.5.5
#import "PTModel.h"
#import "PTExperimentResultMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTBatchGetExperimentResultsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTExperimentResultMessage *> *results;
@end
NS_ASSUME_NONNULL_END
