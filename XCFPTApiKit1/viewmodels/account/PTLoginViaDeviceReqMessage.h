// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaDeviceReqMessage : PTModel
/**
  设备唯一标识符(当前为 PDID)
*/
@property (nonatomic, copy) NSString *deviceId;
@end
NS_ASSUME_NONNULL_END
