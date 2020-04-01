// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSimilarRecipeMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedSimilarRecipeRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSimilarRecipeMessage *> *recipes;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
