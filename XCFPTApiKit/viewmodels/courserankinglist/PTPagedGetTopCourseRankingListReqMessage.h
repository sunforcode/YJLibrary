// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTPagedGetTopCourseRankingListReqMessage : PTModel
/**
  榜单类型
*/
@property (nonatomic, copy) NSString *rankingListName;
@property (nonatomic, copy) NSString *cursor;
@property (nonatomic, assign) int32_t size;
@end
NS_ASSUME_NONNULL_END
