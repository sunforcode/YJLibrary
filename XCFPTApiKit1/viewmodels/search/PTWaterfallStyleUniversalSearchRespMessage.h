// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCursorMessage.h"
#import "PTSearchTargetMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTWaterfallStyleUniversalSearchRespMessage : PTModel
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, strong) NSArray<PTSearchTargetMessage *> *targets;
@end
NS_ASSUME_NONNULL_END
