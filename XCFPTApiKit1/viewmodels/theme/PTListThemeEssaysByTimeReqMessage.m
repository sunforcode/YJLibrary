// apic_version = 0.6.1
#import "PTListThemeEssaysByTimeReqMessage.h"
@implementation PTListThemeEssaysByTimeReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"themeId": @"theme_id",};
}
@end
