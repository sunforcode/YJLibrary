// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEquipmentCategoryMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSearchEquipmentCategoriesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEquipmentCategoryMessage *> *categories;
@end
NS_ASSUME_NONNULL_END
