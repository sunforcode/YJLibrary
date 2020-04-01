// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEquipmentBrandMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecommendedEquipmentBrandsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEquipmentBrandMessage *> *brands;
@end
NS_ASSUME_NONNULL_END
