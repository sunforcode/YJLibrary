// apic_version = 0.5.5
#import "PTModel.h"
#import "PTCourseMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTMonthlyRankingListMessage : PTModel
@property (nonatomic, copy) NSString *yearMonth;
@property (nonatomic, strong) NSArray<PTCourseMessage *> *courses;
@end
NS_ASSUME_NONNULL_END
