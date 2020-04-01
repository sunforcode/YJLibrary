// apic_version = 0.5.5
#import "PTCourseKindMessage.h"
@implementation PTCourseKindMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"courseKindId": @"id",@"name": @"name",@"price": @"price",@"originalPrice": @"original_price",@"humanFriendlyDisplayPrice": @"display_price",@"humanFriendlyDisplayOriginalPrice": @"display_original_price",};
}
@end
