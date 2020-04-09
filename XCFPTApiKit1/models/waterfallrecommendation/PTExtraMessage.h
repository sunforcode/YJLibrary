// apic_version = 0.6.1
#import "PTModel.h"
#import "PTExtraIconTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTExtraMessage : PTModel
@property (nonatomic, copy) NSString *nCollects;
@property (nonatomic, assign) BOOL isVideoRecipe;
@property (nonatomic, copy) NSString *extraIconValue;
@property (nonatomic, assign) BOOL isDiggedByMe;
@property (nonatomic, assign) BOOL isCollectByMe;
@property (nonatomic, assign) PTExtraIconTypeEnum extraIconType;
@end
NS_ASSUME_NONNULL_END
