// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListEventDishesReqMessage : PTModel
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@property (nonatomic, copy) NSString *eventId;
@end
NS_ASSUME_NONNULL_END
