// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetAuthKeyByAuthCodeRespMessage : PTModel
@property (nonatomic, copy) NSString *authKey;
@property (nonatomic, assign) BOOL isUserExist;
@end
NS_ASSUME_NONNULL_END
