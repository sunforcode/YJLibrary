// apic_version = 0.6.1
#import "PTRecipeAdaptationMessage.h"
@implementation PTRecipeAdaptationMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"allowAdaptation": @"allow_adaptation",@"nAdaptation": @"n_adaptation",@"rootRecipeId": @"root_recipe_id",@"allowToChangeAdaptationStatus": @"allow_to_change_adaptation_status",@"adaptationHistoryUrl": @"adaptation_history_url",};
}
@end
