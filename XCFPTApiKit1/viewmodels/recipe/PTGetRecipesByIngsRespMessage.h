// apic_version = 0.6.1
#import "PTModel.h"
#import "PTRecipeMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecipesByIngsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecipeMessage *> *recipes;
@end
NS_ASSUME_NONNULL_END
