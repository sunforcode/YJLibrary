// apic_version = 0.5.5
#import "PTModel.h"
#import "PTHistoricalWelfareViewMessage.h"
#import "PTCursorMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedUserHistoricalWelfareViewsRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTHistoricalWelfareViewMessage *> *welfareViews;
@property (nonatomic, strong) PTCursorMessage *cursor;
@end
NS_ASSUME_NONNULL_END
