// apic_version = 0.6.1
#import "PTModel.h"
#import "PTHybridListCellMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedHomepageDiscoverTabRecommendationsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTHybridListCellMessage *> *cells;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
