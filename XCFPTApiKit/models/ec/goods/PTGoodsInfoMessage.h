// apic_version = 0.5.5
#import "PTModel.h"
#import "PTPictureDictMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGoodsInfoMessage : PTModel
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, strong) PTPictureDictMessage *image;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) BOOL isDirectSales;
@property (nonatomic, copy) NSString *foreword;
@property (nonatomic, copy) NSString *displayPrice;
@property (nonatomic, copy) NSString *displayOriginalPrice;
@property (nonatomic, assign) int32_t totalSalesVolume;
@property (nonatomic, assign) double freight;
@property (nonatomic, assign) double averageRate;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *descUrl;
@property (nonatomic, assign) int32_t recent30daysSalesVolume;
@property (nonatomic, assign) BOOL isFreeDelivery;
@end
NS_ASSUME_NONNULL_END
