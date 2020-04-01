// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEquipmentMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetUserAllEquipmentsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEquipmentMessage *> *equipments;
@end
NS_ASSUME_NONNULL_END
