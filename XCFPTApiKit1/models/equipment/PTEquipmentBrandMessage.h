// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTEquipmentBrandMessage : PTModel
@property (nonatomic, copy) NSString *brandId;
@property (nonatomic, copy) NSString *name;
/**
  设备品牌图
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
