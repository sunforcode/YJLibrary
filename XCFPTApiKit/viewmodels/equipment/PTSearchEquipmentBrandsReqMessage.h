// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  搜索品牌列表
*/
@interface PTSearchEquipmentBrandsReqMessage : PTModel
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *query;
@end
NS_ASSUME_NONNULL_END
