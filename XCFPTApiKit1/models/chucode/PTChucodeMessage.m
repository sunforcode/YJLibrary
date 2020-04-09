// apic_version = 0.6.1
#import "PTChucodeMessage.h"
@implementation PTChucodeMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"chucodeId": @"id",@"name": @"name",@"image": @"image",@"promoteUrl": @"promote_url",@"author": @"author",@"text": @"text",@"createTime": @"create_time",@"startTime": @"start_time",@"endTime": @"end_time",@"price": @"price",};
}
@end
