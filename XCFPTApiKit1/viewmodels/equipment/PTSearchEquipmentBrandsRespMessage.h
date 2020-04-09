// apic_version = 0.6.1
#import "PTModel.h"
#import "PTSelectableEquipmentBrandCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSearchEquipmentBrandsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSelectableEquipmentBrandCellMessage *> *brands;
@end
NS_ASSUME_NONNULL_END
