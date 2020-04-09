// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEquipmentCategoryMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCreateEquipmentCategoryRespMessage : PTModel
@property (nonatomic, strong) PTEquipmentCategoryMessage *category;
@end
NS_ASSUME_NONNULL_END
