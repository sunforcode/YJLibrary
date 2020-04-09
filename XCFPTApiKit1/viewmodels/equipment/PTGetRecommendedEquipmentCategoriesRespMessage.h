// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEquipmentCategoryMessage.h"
#import "PTAddCategoryButtonMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecommendedEquipmentCategoriesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEquipmentCategoryMessage *> *categories;
/**
  优先展示的个数
*/
@property (nonatomic, assign) int32_t firstDisplayNumber;
@property (nonatomic, strong) PTAddCategoryButtonMessage *addCategoryButton;
@end
NS_ASSUME_NONNULL_END
