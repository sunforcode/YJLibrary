// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  用户解绑装备
*/
@interface PTUnbindUserEquipmentsReqMessage : PTModel
@property (nonatomic, strong) NSArray<NSString *> *equipmentIds;
@end
NS_ASSUME_NONNULL_END
