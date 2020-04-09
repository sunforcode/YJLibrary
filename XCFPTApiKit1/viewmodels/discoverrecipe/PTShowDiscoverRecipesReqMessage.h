// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  discover recipes 列表页的请求参数
*/
@interface PTShowDiscoverRecipesReqMessage : PTModel
/**
  一个菜谱 id
*/
@property (nonatomic, copy) NSString *recipeId;
/**
  翻页用的游标, 第一次不传, 翻页时原样发送上次返回的 cursor
*/
@property (nonatomic, copy) NSString *cursor;
/**
  一页含有的个数
*/
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
