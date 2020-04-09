// apic_version = 0.6.1
#import "PTModel.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTGetMyCoursesStatisticsRespMessage : PTModel
/**
  总课程数量
*/
@property (nonatomic, assign) int32_t total;
/**
  学习过的课程
*/
@property (nonatomic, assign) int32_t learnedCount;
/**
  已经交过作业的课程
*/
@property (nonatomic, assign) int32_t dishSubmittedCount;
/**
  已经评价的课程
*/
@property (nonatomic, assign) int32_t ratedCount;
@end
NS_ASSUME_NONNULL_END
