// apic_version = 0.6.1
#import "PTReviewDiggUserMessage.h"
@implementation PTReviewDiggUserMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"users" : [PTUserMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"users": @"users",@"count": @"count",@"total": @"total",};
}
@end
