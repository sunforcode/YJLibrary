// apic_version = 0.5.5
#import "PTModel.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSearchTargetMessage : PTModel
@property (nonatomic, strong) PTWaterfallRecommendationMessage *object;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@end
NS_ASSUME_NONNULL_END
