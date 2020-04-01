// apic_version = 0.5.5
#import "PTModel.h"
#import "PTEquipmentModelMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecommendedEquipmentModelsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEquipmentModelMessage *> *models;
@end
NS_ASSUME_NONNULL_END
