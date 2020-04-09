// apic_version = 0.6.1
#import "PTModel.h"
#import "PTApplicationStatusEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAccountDeactivationApplicationMessage : PTModel
@property (nonatomic, copy) NSString *applicationId;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, assign) PTApplicationStatusEnum status;
@end
NS_ASSUME_NONNULL_END
