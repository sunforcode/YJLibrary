// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
  获取推荐的型号列表
*/
@interface PTGetRecommendedEquipmentModelsReqMessage : PTModel
@property (nonatomic, copy) NSString *categoryId;
@property (nonatomic, copy) NSString *brandId;
@end
NS_ASSUME_NONNULL_END
