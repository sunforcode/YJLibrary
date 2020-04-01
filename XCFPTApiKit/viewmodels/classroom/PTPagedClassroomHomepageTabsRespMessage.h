// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCursorMessage.h"
#import "PTHybridListCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedClassroomHomepageTabsRespMessage : PTModel
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, strong) NSArray<PTHybridListCellMessage *> *cells;
@end
NS_ASSUME_NONNULL_END
