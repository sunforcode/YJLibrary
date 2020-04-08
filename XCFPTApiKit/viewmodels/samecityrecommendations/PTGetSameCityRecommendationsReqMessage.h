// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetSameCityRecommendationsReqMessage : PTModel
/**
  必填
*/
@property (nonatomic, copy) NSString *cursor;
/**
  必填
*/
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
