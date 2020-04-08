// apic_version = 0.5.5
#import "PTRecipeStatsMessage.h"
@implementation PTRecipeStatsMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"nDishes": @"n_dishes",@"nCooked": @"n_cooked",@"nCookedLastWeek": @"n_cooked_last_week",@"nComments": @"n_comments",@"nQuestions": @"n_questions",@"nCollects": @"n_collects",@"nPv": @"n_pv",@"nVodPlayed": @"n_vod_played",@"nUnformattedCollects": @"n_unformatted_collects",@"nUnformattedPv": @"n_unformatted_pv",@"nUnformattedVodPlayed": @"n_unformatted_vod_played",};
}
@end
