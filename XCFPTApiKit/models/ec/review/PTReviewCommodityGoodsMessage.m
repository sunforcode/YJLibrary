// apic_version = 0.5.5
#import "PTReviewCommodityGoodsMessage.h"
@implementation PTReviewCommodityGoodsMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"goodsId": @"goods_id",@"name": @"name",@"isDirectSales": @"is_direct_sales",};
}
@end
