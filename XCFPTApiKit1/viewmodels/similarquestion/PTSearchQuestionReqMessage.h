// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  搜索类似问题的功能
*/
@interface PTSearchQuestionReqMessage : PTModel
/**
  菜谱 id
*/
@property (nonatomic, copy) NSString *recipeId;
/**
  问题内容
*/
@property (nonatomic, copy) NSString *keyword;
@property (nonatomic, copy) NSString *cursor;
/**
  一页含有的个数
*/
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
