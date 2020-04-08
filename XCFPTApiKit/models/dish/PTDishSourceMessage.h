// apic_version = 0.5.5
#import "PTModel.h"
#import "PTDishSourceFlagEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTDishSourceMessage : PTModel
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, assign) PTDishSourceFlagEnum flag;
@end
NS_ASSUME_NONNULL_END
