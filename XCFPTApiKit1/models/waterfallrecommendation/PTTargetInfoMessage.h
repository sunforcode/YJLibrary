// apic_version = 0.6.1
#import "PTModel.h"
#import "PTWaterfallRecommendationTargetTypeEnum.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTTargetInfoMessage : PTModel
@property (nonatomic, copy) NSString *targetId;
@property (nonatomic, assign) PTWaterfallRecommendationTargetTypeEnum targetType;
@end
NS_ASSUME_NONNULL_END
