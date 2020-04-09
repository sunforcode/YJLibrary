// apic_version = 0.6.1
#import "PTUserMessage.h"
@implementation PTUserMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"userId": @"id",@"name": @"name",@"photo": @"photo",@"photo60": @"photo60",@"photo160": @"photo160",@"image": @"image",@"mail": @"mail",@"isExpert": @"is_expert",@"expertInfoStr": @"expert_info_str",@"isMp": @"is_mp",@"url": @"url",@"hasUserBeenPrime": @"has_user_been_prime",@"isPrimeAvaliable": @"is_prime_avaliable",@"desc": @"desc",@"gender": @"gender",@"birthday": @"birthday",@"hometownLocation": @"hometown_location",@"currentLocation": @"current_location",@"profession": @"profession",@"createTime": @"create_time",@"humanFriendlyNFollow": @"n_follow",@"humanFriendlyNFollowed": @"n_followed",@"nEquipments": @"nequipments",@"nRecipes": @"nrecipes",@"nDishes": @"ndishes",@"nCollects": @"ncollects",@"nPosts": @"nposts",@"nCourses": @"ncourses",@"nBuybuybuy": @"nbuybuybuy",@"tpNickname": @"tp_nickname",@"humanFriendlyNTotalRecipeCollects": @"n_total_recipe_collects",@"humanFriendlyNTotalRecipeDishes": @"n_total_recipe_dishes",@"humanFriendlyNTotalDishDigges": @"n_total_dish_digges",@"isFollowing": @"is_following",@"nFollow": @"nfollow",@"nFollowed": @"nfollowed",@"nEssays": @"nessays",};
}
@end
