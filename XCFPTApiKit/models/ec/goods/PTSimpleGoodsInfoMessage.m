// apic_version = 0.5.5
#import "PTSimpleGoodsInfoMessage.h"
@implementation PTSimpleGoodsInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"goodsId": @"goods_id",@"image": @"image",@"goodsName": @"goods_name",@"price": @"price",};
}
@end
