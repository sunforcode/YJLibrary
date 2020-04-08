// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEquipmentMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTBindUserEquipmentRespMessage : PTModel
@property (nonatomic, strong) PTEquipmentMessage *equipment;
@end
NS_ASSUME_NONNULL_END
