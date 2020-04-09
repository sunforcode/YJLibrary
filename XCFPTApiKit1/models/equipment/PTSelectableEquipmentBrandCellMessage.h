// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEquipmentBrandMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  可选择的设备品牌
*/
@interface PTSelectableEquipmentBrandCellMessage : PTModel
@property (nonatomic, strong) PTEquipmentBrandMessage *brand;
/**
  是否绑定
*/
@property (nonatomic, assign) BOOL bound;
/**
  绑定的型号
*/
@property (nonatomic, copy) NSString *model;
@end
NS_ASSUME_NONNULL_END
