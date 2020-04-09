// apic_version = 0.6.1
#import "PTModel.h"
#import "PTThemeMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTShowThemeRespMessage : PTModel
@property (nonatomic, strong) PTThemeMessage *theme;
@end
NS_ASSUME_NONNULL_END
