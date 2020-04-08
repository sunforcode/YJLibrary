// apic_version = 0.5.5
#import "PTExtraMessage.h"
@implementation PTExtraMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"nCollects": @"n_collects",@"isVideoRecipe": @"is_video_recipe",@"extraIconValue": @"extra_icon_value",@"isDiggedByMe": @"is_digged_by_me",@"isCollectByMe": @"is_collect_by_me",@"extraIconType": @"extra_icon_type",};
}
@end
