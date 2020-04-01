// apic_version = 0.5.5
#import "PTModel.h"
#import "PTTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTTargetInfoMessage : PTModel
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
