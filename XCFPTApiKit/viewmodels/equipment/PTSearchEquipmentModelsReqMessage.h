// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  搜索型号列表
*/
@interface PTSearchEquipmentModelsReqMessage : PTModel
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *brandId;
@property (nonatomic, copy) NSString *query;
@end
NS_ASSUME_NONNULL_END
