// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
/**
 查看作品是否能修改
*/
@interface PTCanUpdateDishReqMessage : PTModel
@property (nonatomic, copy) NSString *dishId;
@end
NS_ASSUME_NONNULL_END
