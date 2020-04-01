// apic_version = 0.5.5
#import "PTShopInfoMessage.h"
@implementation PTShopInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"shopId": @"shop_id",@"name": @"name",@"url": @"url",@"image": @"image",};
}
@end
