// apic_version = 0.6.1
#import "PTModel.h"
#import "PTNetworkSignalEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTHeaderMessage : PTModel
/**
  签名用的字段
*/
@property (nonatomic, copy) NSString *sign;
/**
  客户端设备 id, 重新安装程序不会变
*/
@property (nonatomic, copy) NSString *pdid;
/**
  客户端程序 id, 重新安装程序会变
*/
@property (nonatomic, copy) NSString *psid;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, assign) PTNetworkSignalEnum network;
@end
NS_ASSUME_NONNULL_END
