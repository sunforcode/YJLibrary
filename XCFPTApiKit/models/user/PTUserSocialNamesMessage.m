// apic_version = 0.5.5
#import "PTUserSocialNamesMessage.h"
@implementation PTUserSocialNamesMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"chustudioWechat": @"chustudio_wechat",@"douban": @"douban",@"qzone": @"qzone",@"wechat": @"wechat",@"weibo": @"weibo",};
}
@end
