// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  关闭设备绑定提示信息
*/
@interface PTCloseEquipmentBindingTipsReqMessage : PTModel
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *query;
@end
NS_ASSUME_NONNULL_END
