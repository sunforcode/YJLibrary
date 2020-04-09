// apic_version = 0.6.1
#import "PTModel.h"
#import "PTSelectableEquipmentBrandCellMessage.h"
#import "PTAddBrandCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecommendedEquipmentBrandsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSelectableEquipmentBrandCellMessage *> *brands;
@property (nonatomic, strong) PTAddBrandCellMessage *addBrandCell;
@end
NS_ASSUME_NONNULL_END
