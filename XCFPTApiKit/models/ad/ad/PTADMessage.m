// apic_version = 0.5.5
#import "PTADMessage.h"
@implementation PTADMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"adId": @"id",@"startTime": @"start_time",@"endTime": @"end_time",@"weight": @"weight",@"materialId": @"material_id",@"exposeTrackingUrls": @"expose_tracking_urls",@"clickTrackingUrls": @"click_tracking_urls",@"adInfo": @"ad_info",@"adType": @"ad_type",};
}
@end
