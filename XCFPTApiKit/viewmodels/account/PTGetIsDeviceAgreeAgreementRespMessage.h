// apic_version = 0.5.5
#import "PTModel.h"
#import "PTAgreementStyleEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetIsDeviceAgreeAgreementRespMessage : PTModel
@property (nonatomic, assign) BOOL isAgree;
@property (nonatomic, assign) PTAgreementStyleEnum agreementStyle;
@end
NS_ASSUME_NONNULL_END
