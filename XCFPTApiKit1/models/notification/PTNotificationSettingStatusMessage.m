// apic_version = 0.6.1
#import "PTNotificationSettingStatusMessage.h"
@implementation PTNotificationSettingStatusMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"diggDish": @"digg_dish",@"diggComment": @"digg_comment",@"collectRecipe": @"collect_recipe",@"collectCourse": @"collect_course",};
}
@end
