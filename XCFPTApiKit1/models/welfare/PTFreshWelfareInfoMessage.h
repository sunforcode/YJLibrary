// apic_version = 0.6.1
#import "PTModel.h"
#import "PTFreshWelfareStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTFreshWelfareInfoMessage : PTModel
@property (nonatomic, copy) NSString *lastReportTime;
@property (nonatomic, copy) NSString *alter;
@property (nonatomic, assign) PTFreshWelfareStatusEnum status;
@end
NS_ASSUME_NONNULL_END
