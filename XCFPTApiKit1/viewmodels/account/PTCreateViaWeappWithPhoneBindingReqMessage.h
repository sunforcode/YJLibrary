// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTCreateViaWeappWithPhoneBindingReqMessage : PTModel
/**
  微信手机号信息加密字符串
*/
@property (nonatomic, copy) NSString *phoneEncryptedData;
/**
  微信加密算法的初始向量
*/
@property (nonatomic, copy) NSString *phoneIv;
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, assign) BOOL skipPhoneBinding;
@property (nonatomic, copy) NSString *weappSrc;
@property (nonatomic, copy) NSString *infoEncryptedData;
@property (nonatomic, copy) NSString *infoIv;
@end
NS_ASSUME_NONNULL_END
