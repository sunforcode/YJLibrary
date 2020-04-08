// apic_version = 0.5.5
#import "PTModel.h"
#import "PTDishMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedEpidemicEventDishesRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTDishMessage *> *dishes;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
