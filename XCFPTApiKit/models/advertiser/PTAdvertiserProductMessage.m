// apic_version = 0.5.5
#import "PTAdvertiserProductMessage.h"
@implementation PTAdvertiserProductMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"productId": @"id",@"name": @"name",@"link": @"link",@"image": @"image",@"beginTime": @"begin_time",@"endTime": @"end_time",};
}
@end
