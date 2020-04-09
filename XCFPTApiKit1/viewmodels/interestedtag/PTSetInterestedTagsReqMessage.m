// apic_version = 0.6.1
#import "PTSetInterestedTagsReqMessage.h"
@implementation PTSetInterestedTagsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"deviceId": @"device_id",@"interestTagIds": @"interest_tag_ids",};
}
@end
