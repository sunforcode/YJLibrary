// apic_version = 0.5.5
#import "PTClassroomVoucherMessage.h"
@implementation PTClassroomVoucherMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"amount": @"amount",@"beginTime": @"begin_time",@"endTime": @"end_time",@"desc": @"desc",@"title1": @"title1",@"title2": @"title2",};
}
@end
