// apic_version = 0.6.1
#import "PTModel.h"
#import "PTUserEquipmentMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedGetUserEquipmentsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTUserEquipmentMessage *> *equipments;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
