// apic_version = 0.5.5
#import "PTMarketTabMessage.h"
@implementation PTMarketTabMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"goods" : [PTGoodsInfoMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"name": @"name",@"title": @"title",@"subTitle": @"sub_title",@"weight": @"weight",@"goods": @"goods",@"contentArrange": @"content_arrange",};
}
@end
