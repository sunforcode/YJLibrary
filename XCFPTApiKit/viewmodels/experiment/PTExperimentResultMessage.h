// apic_version = 0.5.5
#import "PTModel.h"
#import "PTGetExperimentResultRespMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTExperimentResultMessage : PTModel
@property (nonatomic, copy) NSString *namespaceName;
@property (nonatomic, strong) PTGetExperimentResultRespMessage *result;
@end
NS_ASSUME_NONNULL_END
