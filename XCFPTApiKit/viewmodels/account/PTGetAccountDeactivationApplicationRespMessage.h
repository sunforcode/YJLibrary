// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAccountDeactivationApplicationMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAccountDeactivationApplicationRespMessage : PTModel
@property (nonatomic, strong) PTAccountDeactivationApplicationMessage *application;
@end
NS_ASSUME_NONNULL_END
