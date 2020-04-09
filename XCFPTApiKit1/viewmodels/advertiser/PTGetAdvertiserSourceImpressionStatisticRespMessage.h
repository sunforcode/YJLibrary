// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAdvertiserSourceCountStatisticMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserSourceImpressionStatisticRespMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *beginDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, strong) NSArray<PTAdvertiserSourceCountStatisticMessage *> *data;
@end
NS_ASSUME_NONNULL_END
