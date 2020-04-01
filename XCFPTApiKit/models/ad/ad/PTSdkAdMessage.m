// apic_version = 0.5.5
#import "PTSdkAdMessage.h"
@implementation PTSdkAdMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"adType": @"ad_type",@"weight": @"weight",@"deliveryId": @"delivery_id",@"insideType": @"inside_type",@"clickTrackingUrls": @"click_tracking_urls",@"exposeTrackingUrls": @"expose_tracking_urls",};
}
@end
