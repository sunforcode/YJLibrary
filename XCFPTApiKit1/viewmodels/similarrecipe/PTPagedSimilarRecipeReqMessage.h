// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedSimilarRecipeReqMessage : PTModel
@property (nonatomic, copy) NSString *recipeId;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *refer;
@end
NS_ASSUME_NONNULL_END
