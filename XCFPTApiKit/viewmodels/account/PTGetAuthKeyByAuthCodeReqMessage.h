// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAuthKeyByAuthCodeReqMessage : PTModel
/**
  第三方登录根据 auth code 获取 auth key
*/
@property (nonatomic, copy) NSString *authCode;
@property (nonatomic, copy) NSString *provider;
@end
NS_ASSUME_NONNULL_END
