// apic_version = 0.5.5
#import "PTSetInterestedTagsReqMessage.h"
@implementation PTSetInterestedTagsReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"deviceId": @"device_id",@"interestTagIds": @"interest_tag_ids",};
}
@end
