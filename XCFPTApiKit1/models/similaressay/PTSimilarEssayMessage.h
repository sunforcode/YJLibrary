// apic_version = 0.6.1
#import "PTModel.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
/**
  相似菜谱
*/
@interface PTSimilarEssayMessage : PTModel
@property (nonatomic, strong) PTWaterfallRecommendationMessage *object;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@end
NS_ASSUME_NONNULL_END
