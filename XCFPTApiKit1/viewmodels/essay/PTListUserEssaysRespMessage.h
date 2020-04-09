// apic_version = 0.6.1
#import "PTModel.h"
#import "PTEssayMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTListUserEssaysRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTEssayMessage *> *essays;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
