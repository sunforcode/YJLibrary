// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecommendEventsReqMessage : PTModel
/**
  必填
*/
@property (nonatomic, copy) NSString *cursor;
/**
  必填
*/
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *timezone;
@end
NS_ASSUME_NONNULL_END
