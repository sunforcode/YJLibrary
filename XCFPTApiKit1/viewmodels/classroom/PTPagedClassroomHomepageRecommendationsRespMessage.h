// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCursorMessage.h"
#import "PTHybridListCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedClassroomHomepageRecommendationsRespMessage : PTModel
/**
  猜你喜欢 标题文案
*/
@property (nonatomic, copy) NSString *title;
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, strong) NSArray<PTHybridListCellMessage *> *cells;
@end
NS_ASSUME_NONNULL_END
