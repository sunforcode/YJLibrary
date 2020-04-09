// apic_version = 0.6.1
#import "PTCommonRequestParameterMessage.h"
@implementation PTCommonRequestParameterMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"origin": @"origin",@"version": @"version",@"sk": @"sk",@"locationCode": @"location_code",@"webp": @"webp",@"apiKey": @"api_key",@"nonce": @"nonce",@"timestamp": @"_ts",@"geoLat": @"geo_lat",@"geoLon": @"geo_lon",@"geoAccu": @"geo_accu",};
}
@end
