// apic_version = 0.5.5
#import "PTListThemeEssaysReqMessage.h"
@implementation PTListThemeEssaysReqMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"cursor": @"cursor",@"size": @"size",@"themeId": @"theme_id",};
}
@end
