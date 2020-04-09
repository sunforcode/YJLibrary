// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAdvertiserKeywordStatisticMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserKeywordStatisticRespMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *beginDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, strong) NSArray<PTAdvertiserKeywordStatisticMessage *> *data;
@end
NS_ASSUME_NONNULL_END
