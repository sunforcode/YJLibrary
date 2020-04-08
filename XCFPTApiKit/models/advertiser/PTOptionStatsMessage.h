// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTOptionStatsMessage : PTModel
@property (nonatomic, copy) NSString *optionId;
@property (nonatomic, copy) NSString *optionDesc;
@property (nonatomic, assign) double precentValue;
@end
NS_ASSUME_NONNULL_END
