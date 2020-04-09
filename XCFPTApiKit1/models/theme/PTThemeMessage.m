// apic_version = 0.6.1
#import "PTThemeMessage.h"
@implementation PTThemeMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"themeId": @"theme_id",@"name": @"name",@"displayName": @"display_name",@"desc": @"desc",@"createTime": @"create_time",@"updateTime": @"update_time",@"url": @"url",@"image": @"image",};
}
@end
