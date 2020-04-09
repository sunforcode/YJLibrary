// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取推荐的装备品类
*/
@interface PTGetRecommendedEquipmentCategoriesReqMessage : PTModel
/**
  根据菜谱草稿获取推荐的品类
*/
@property (nonatomic, copy) NSString *recipeDraftId;
@end
NS_ASSUME_NONNULL_END
