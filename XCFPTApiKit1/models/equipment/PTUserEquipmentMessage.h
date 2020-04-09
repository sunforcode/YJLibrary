// apic_version = 0.6.1
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTUserEquipmentMessage : PTModel
@property (nonatomic, copy) NSString *equipmentId;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *model;
/**
  设备图片
*/
@property (nonatomic, strong) PTPictureDictMessage *image;
@end
NS_ASSUME_NONNULL_END
