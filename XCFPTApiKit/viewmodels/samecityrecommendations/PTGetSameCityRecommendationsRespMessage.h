// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSameCityRecommendationMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetSameCityRecommendationsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSameCityRecommendationMessage *> *recommendations;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
