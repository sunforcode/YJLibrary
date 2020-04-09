// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTAdvertiserKeywordStatisticMessage : PTModel
@property (nonatomic, assign) int32_t nRecipe DEPRECATED_ATTRIBUTE;
@property (nonatomic, assign) int32_t nDishes;
@property (nonatomic, assign) int32_t nEssay DEPRECATED_ATTRIBUTE;
@property (nonatomic, copy) NSString *date;
@property (nonatomic, assign) int32_t nRecipes;
@property (nonatomic, assign) int32_t nEssays;
@end
NS_ASSUME_NONNULL_END
