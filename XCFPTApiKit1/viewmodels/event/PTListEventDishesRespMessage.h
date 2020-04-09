// apic_version = 0.6.1
#import "PTModel.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListEventDishesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTWaterfallRecommendationMessage *> *waterfallDishes;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
