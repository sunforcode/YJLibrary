// apic_version = 0.6.1
#import "PTModel.h"
#import "PTRelatedEssayMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedRelatedEssaysRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTRelatedEssayMessage *> *essays;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
