// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  根据query获取匹配的设备绑定提示信息
*/
@interface PTGetMatchedEquipmentBindingTipsListReqMessage : PTModel
@property (nonatomic, copy) NSString *query;
@end
NS_ASSUME_NONNULL_END
