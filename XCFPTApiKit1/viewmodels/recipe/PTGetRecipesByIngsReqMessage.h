// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取生成的菜谱
*/
@interface PTGetRecipesByIngsReqMessage : PTModel
/**
  空格分隔的食材
*/
@property (nonatomic, copy) NSString *ingredients;
@property (nonatomic, assign) BOOL isFastFood;
@end
NS_ASSUME_NONNULL_END
