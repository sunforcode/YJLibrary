// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  根据品类获取推荐的装备品牌
*/
@interface PTGetRecommendedEquipmentBrandsReqMessage : PTModel
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *recipeDraftId;
@end
NS_ASSUME_NONNULL_END
