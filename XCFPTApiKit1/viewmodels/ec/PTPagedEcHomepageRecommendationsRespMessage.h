// apic_version = 0.6.1
#import "PTModel.h"
#import "PTCursorMessage.h"
#import "PTHybridListCellMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedEcHomepageRecommendationsRespMessage : PTModel
@property (nonatomic, strong) PTCursorMessage *cursor;
@property (nonatomic, strong) NSArray<PTHybridListCellMessage *> *cells;
/**
  猜你喜欢 标题文案
*/
@property (nonatomic, copy) NSString *title;
@end
NS_ASSUME_NONNULL_END
