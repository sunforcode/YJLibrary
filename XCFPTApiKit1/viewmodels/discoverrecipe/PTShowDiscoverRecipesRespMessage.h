// apic_version = 0.6.1
#import "PTModel.h"
#import "PTRecipeMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTShowDiscoverRecipesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRecipeMessage *> *recipes;
/**
  翻页用的游标
*/
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
