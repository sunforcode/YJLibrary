// apic_version = 0.5.5
#import "PTModel.h"
#import "PTWaterfallRecommendationMessage.h"
#import "PTTrackingMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTRelatedEssayMessage : PTModel
@property (nonatomic, strong) PTWaterfallRecommendationMessage *recommend;
@property (nonatomic, strong) PTTrackingMessage *tracking;
@property (nonatomic, copy) NSString *title;
@end
NS_ASSUME_NONNULL_END
