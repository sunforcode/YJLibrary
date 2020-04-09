// apic_version = 0.6.1
#import "PTADInfoMessage.h"
@implementation PTADInfoMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"content": @"content",@"image": @"image",@"coverMicroVideo": @"cover_micro_video",@"lifecycleInterval": @"lifecycle_interval",@"displayInterval": @"display_interval",@"position": @"position",@"label": @"label",@"displayTime": @"display_time",@"title1st": @"title_1st",@"title2nd": @"title_2nd",@"title3rd": @"title_3rd",@"url": @"url",@"name": @"name",@"deeplinkUrl": @"deeplink_url",};
}
@end
