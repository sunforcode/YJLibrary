// apic_version = 0.6.1
#import "PTModel.h"
#import "PTSlotADInfoMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLookupAdsBySlotNameRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSlotADInfoMessage *> *ads;
@end
NS_ASSUME_NONNULL_END
