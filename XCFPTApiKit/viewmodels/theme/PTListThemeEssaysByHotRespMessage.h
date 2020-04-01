// apic_version = 0.5.5
#import "PTModel.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListThemeEssaysByHotRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTWaterfallRecommendationMessage *> *waterfallEssays;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
