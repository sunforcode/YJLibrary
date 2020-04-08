// apic_version = 0.5.5
#import "PTModel.h"
#import "PTMonthlyRankingListMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMonthlyCourseRankingListRespMessage : PTModel
@property (nonatomic, strong) NSArray<PTMonthlyRankingListMessage *> *monthlyRankingList;
@end
NS_ASSUME_NONNULL_END
