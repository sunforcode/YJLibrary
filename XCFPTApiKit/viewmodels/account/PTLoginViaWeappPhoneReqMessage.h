// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTLoginViaWeappPhoneReqMessage : PTModel
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, copy) NSString *phoneEncryptedData;
@property (nonatomic, copy) NSString *phoneIv;
@property (nonatomic, copy) NSString *weappSrc;
@end
NS_ASSUME_NONNULL_END
