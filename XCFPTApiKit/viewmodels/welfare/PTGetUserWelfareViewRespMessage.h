// apic_version = 0.5.5
#import "PTModel.h"
#import "PTWelfareViewMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetUserWelfareViewRespMessage : PTModel
@property (nonatomic, strong) PTWelfareViewMessage *welfareView;
@end
NS_ASSUME_NONNULL_END
