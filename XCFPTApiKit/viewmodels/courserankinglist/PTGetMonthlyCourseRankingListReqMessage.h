// apic_version = 0.5.5
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMonthlyCourseRankingListReqMessage : PTModel
/**
  年月  格式:yyyy-MM
*/
@property (nonatomic, strong) NSArray<NSString *> *yearMonth;
/**
  榜单类型
*/
@property (nonatomic, copy) NSString *rankingListName;
@end
NS_ASSUME_NONNULL_END
