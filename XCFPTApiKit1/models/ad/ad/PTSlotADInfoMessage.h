// apic_version = 0.6.1
#import "PTModel.h"
#import "PTADMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSlotADInfoMessage : PTModel
@property (nonatomic, copy) NSString *slotName;
@property (nonatomic, strong) PTADMessage *adInfo;
@end
NS_ASSUME_NONNULL_END
