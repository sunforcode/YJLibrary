// apic_version = 0.5.5
#import "PTModel.h"
#import "PTIndependentWelfareViewMessage.h"
#import "PTDependentWelfareViewMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTWelfareViewMessage : PTModel
@property (nonatomic, strong) PTIndependentWelfareViewMessage *independentWelfareView;
@property (nonatomic, strong) PTDependentWelfareViewMessage *dependentWelfareView;
@end
NS_ASSUME_NONNULL_END
