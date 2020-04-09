// apic_version = 0.6.1
#import "PTModel.h"
#import "PTAdvertiserAccessTopTenStatisticMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserAccessTopTenStatisticRespMessage : PTModel
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *beginDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, strong) NSArray<PTAdvertiserAccessTopTenStatisticMessage *> *data;
@end
NS_ASSUME_NONNULL_END
