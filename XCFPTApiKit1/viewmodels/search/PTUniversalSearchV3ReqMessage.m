// apic_version = 0.6.1
#import "PTUniversalSearchV3ReqMessage.h"
@implementation PTUniversalSearchV3ReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"q": @"q",@"size": @"size",@"cursor": @"cursor",@"searchType": @"search_type",@"orderBy": @"order_by",@"authorId": @"author_id",@"onlyFollowed": @"only_followed",@"onlyVideo": @"only_video",@"ifa": @"ifa",@"gpid": @"gpid",@"iem": @"iem",@"o1": @"o1",};
}
@end
