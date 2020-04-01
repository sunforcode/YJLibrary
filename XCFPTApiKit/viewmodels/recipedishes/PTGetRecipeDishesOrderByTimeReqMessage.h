// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取菜谱下的作品列表请求
*/
@interface PTGetRecipeDishesOrderByTimeReqMessage : PTModel
@property (nonatomic, copy) NSString *recipeId;
@property (nonatomic, assign) int32_t dishId;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
