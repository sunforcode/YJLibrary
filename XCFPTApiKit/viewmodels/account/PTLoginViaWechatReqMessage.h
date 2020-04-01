// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaWechatReqMessage : PTModel
/**
  微信应用登录 authorization code
*/
@property (nonatomic, copy) NSString *code;
@end
NS_ASSUME_NONNULL_END
