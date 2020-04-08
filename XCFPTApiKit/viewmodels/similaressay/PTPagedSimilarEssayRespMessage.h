// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSimilarEssayMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedSimilarEssayRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTSimilarEssayMessage *> *essays;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
