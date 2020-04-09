// apic_version = 0.6.1
#import "PTModel.h"
#import "PTReviewCommodityGoodsMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReviewCommodityMessage : PTModel
@property (nonatomic, strong) PTReviewCommodityGoodsMessage *goods;
@property (nonatomic, copy) NSString *kindName;
/**
  在xcf代码中并不是一个枚举类型，直返的字段
*/
@property (nonatomic, assign) int32_t kindId;
@property (nonatomic, assign) int32_t number;
@end
NS_ASSUME_NONNULL_END
