// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEventMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetRecommendEventsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEventMessage *> *events;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
