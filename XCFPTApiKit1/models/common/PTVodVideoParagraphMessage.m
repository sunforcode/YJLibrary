// apic_version = 0.6.1
#import "PTVodVideoParagraphMessage.h"
@implementation PTVodVideoParagraphMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"vodVideoId": @"vod_video_id",@"title": @"title",@"videoInfo": @"video_info",@"cover": @"cover",@"vodId": @"vod_id",};
}
@end
