// apic_version = 0.6.1
#import "PTModel.h"
#import "PTOneDayOneNumberStatisticMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserOneDayOneNumberStatRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTOneDayOneNumberStatisticMessage *> *statistics;
@end
NS_ASSUME_NONNULL_END
