// apic_version = 0.5.5
#import "PTModel.h"
#import "PTStatisticTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAdvertiserOneDayOneNumberStatReqMessage : PTModel
@property (nonatomic, copy) NSString *beginDate;
@property (nonatomic, copy) NSString *endDate;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, assign) PTStatisticTypeEnum statisticType;
@end
NS_ASSUME_NONNULL_END
