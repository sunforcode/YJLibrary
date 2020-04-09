// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTReviewCommodityGoodsMessage : PTModel
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) BOOL isDirectSales;
@end
NS_ASSUME_NONNULL_END
