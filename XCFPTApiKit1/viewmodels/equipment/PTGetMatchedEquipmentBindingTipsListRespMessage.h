// apic_version = 0.6.1
#import "PTModel.h"
#import "PTMatchedEquipmentBindingTipsCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMatchedEquipmentBindingTipsListRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTMatchedEquipmentBindingTipsCellMessage *> *cells;
@end
NS_ASSUME_NONNULL_END
