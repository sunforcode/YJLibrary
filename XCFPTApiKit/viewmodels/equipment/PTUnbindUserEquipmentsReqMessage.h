// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  删除用户所有的装备
*/
@interface PTUnbindUserEquipmentsReqMessage : PTModel
@property (nonatomic, strong) NSArray<NSString *> *equipmentIds;
@end
NS_ASSUME_NONNULL_END
