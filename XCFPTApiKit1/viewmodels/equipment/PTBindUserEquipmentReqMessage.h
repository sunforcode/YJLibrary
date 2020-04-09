// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  用户绑定设备
*/
@interface PTBindUserEquipmentReqMessage : PTModel
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *brandId;
@property (nonatomic, copy) NSString *modelName;
@end
NS_ASSUME_NONNULL_END
