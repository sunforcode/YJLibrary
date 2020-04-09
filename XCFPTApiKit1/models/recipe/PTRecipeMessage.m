// apic_version = 0.6.1
#import "PTRecipeMessage.h"
@implementation PTRecipeMessage
+ (NSDictionary *)modelContainerPropertyGenericClass {
   return @{@"labels" : [PTRecipeLabelMessage class],@"ingredient" : [PTIngredientMessage class],@"instruction" : [PTInstructionMessage class],@"recipeCats" : [PTRecipeCatsMessage class],};
}
+ (NSDictionary *)modelCustomPropertyMapper {
   return @{@"recipeId": @"id",@"name": @"name",@"desc": @"desc",@"photo": @"photo",@"image": @"image",@"hasMinorAvatar": @"has_minor_avatar",@"minorAuthor": @"minor_author",@"isAdaptationRecipe": @"is_adaptation_recipe",@"labels": @"labels",@"adaptation": @"adaptation",@"author": @"author",@"url": @"url",@"ingredient": @"ingredient",@"instruction": @"instruction",@"tips": @"tips",@"isIntellective": @"is_intellective",@"recipeCats": @"recipe_cats",@"originalCategories": @"original_categories",@"ident": @"ident",@"photo80": @"photo80",@"photo90": @"photo90",@"photo140": @"photo140",@"photo280": @"photo280",@"photo340": @"photo340",@"photo526": @"photo526",@"photo580": @"photo580",@"photo640": @"photo640",@"thumb": @"thumb",@"createTime": @"create_time",@"friendlyCreateTime": @"friendly_create_time",@"score": @"score",@"isExclusive": @"is_exclusive",@"isFullscreen": @"is_fullscreen",@"stats": @"stats",@"vodVideo": @"vod_video",@"collectedByMe": @"collected_by_me",@"coverMicroVideo": @"cover_micro_video",};
}
@end
