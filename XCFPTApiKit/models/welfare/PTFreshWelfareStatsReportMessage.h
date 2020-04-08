// apic_version = 0.5.5
#import "PTModel.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
#import "PTSummaryMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTFreshWelfareStatsReportMessage : PTModel
@property (nonatomic, copy) NSString *goodsName;
@property (nonatomic, assign) int32_t totalUser;
@property (nonatomic, assign) int32_t nDays;
@property (nonatomic, assign) int32_t reportNumber;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *genderSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *ageSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *areaSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *economicSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *rankSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *appearanceRankSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *innerRankSummary;
@property (nonatomic, strong) NSArray<PTSummaryMessage *> *economicRankSummary;
@property (nonatomic, copy) NSString *detailDownloadUrl;
@property (nonatomic, copy) NSString *userCommentsDownloadUrl;
@end
NS_ASSUME_NONNULL_END
