// apic_version = 0.5.5
#import "PTModel.h"
#import "PTRecipeMessage.h"
#import "PTTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTTargetMessage : PTModel
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *typeText;
@property (nonatomic, strong) PTRecipeMessage *recipe;
@property (nonatomic, assign) PTTargetTypeEnum type;
@end
NS_ASSUME_NONNULL_END
