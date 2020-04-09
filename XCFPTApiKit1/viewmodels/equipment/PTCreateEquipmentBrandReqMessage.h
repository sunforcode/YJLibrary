// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  创建装备品牌
*/
@interface PTCreateEquipmentBrandReqMessage : PTModel
/**
  在哪个品类下创建品牌
*/
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *name;
@end
NS_ASSUME_NONNULL_END
