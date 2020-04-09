// apic_version = 0.6.1
#import "PTModel.h"
#import "PTQuestionnaireStatsMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserQuestionnaireStatisticsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTQuestionnaireStatsMessage *> *stats;
@end
NS_ASSUME_NONNULL_END
