// apic_version = 0.6.1
#import "PTModel.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTSameCityRecommendationMessage : PTModel
@property (nonatomic, strong) PTWaterfallRecommendationMessage *recommendContent;
@property (nonatomic, copy) NSString *displayDistance;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *sensorTracking;
@end
NS_ASSUME_NONNULL_END
