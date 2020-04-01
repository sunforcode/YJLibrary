// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAdvertiserDataStatisticMessage : PTModel
@property (nonatomic, assign) int32_t nFollowers;
@property (nonatomic, assign) int32_t nRecipes;
@property (nonatomic, assign) int32_t nRecipePv;
@property (nonatomic, assign) int32_t nRecipeCollections;
@property (nonatomic, assign) int32_t nRecipeDishes;
@property (nonatomic, copy) NSString *date;
@property (nonatomic, assign) int32_t nRecipeShares;
@end
NS_ASSUME_NONNULL_END
