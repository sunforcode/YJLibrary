// apic_version = 0.5.5
#import "PTModel.h"
#import "PTQuestionMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAskQuestionRespMessage : PTModel
@property (nonatomic, strong) PTQuestionMessage *question;
@end
NS_ASSUME_NONNULL_END
