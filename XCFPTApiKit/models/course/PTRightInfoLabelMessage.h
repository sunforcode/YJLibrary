// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRightInfoStyleEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRightInfoLabelMessage : PTModel
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) PTRightInfoStyleEnum style;
@end
NS_ASSUME_NONNULL_END
