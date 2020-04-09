// apic_version = 0.6.1
#import "PTModel.h"
#import "PTFeedsTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTFeedsMessage : PTModel
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *identification;
@property (nonatomic, assign) PTFeedsTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
