// apic_version = 0.6.1
#import "PTGoodsInfoMessage.h"
@implementation PTGoodsInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"goodsId": @"id",@"image": @"image",@"name": @"name",@"isDirectSales": @"is_direct_sales",@"foreword": @"foreword",@"displayPrice": @"display_price",@"displayOriginalPrice": @"display_original_price",@"totalSalesVolume": @"total_sales_volume",@"freight": @"freight",@"averageRate": @"average_rate",@"desc": @"desc",@"url": @"url",@"descUrl": @"desc_url",@"recent30daysSalesVolume": @"recent_30days_sales_volume",@"isFreeDelivery": @"is_free_delivery",};
}
@end
