// apic_version = 0.5.5
#import "PTModel.h"
#import "PTOptionStatsMessage.h"
NS_ASSUME_NONNULL_BEGIN
@interface PTOptionStatsListMessage : PTModel
/**
  选项统计
*/
@property (nonatomic, strong) NSArray<PTOptionStatsMessage *> *stats;
/**
  日期
*/
@property (nonatomic, copy) NSString *date;
@end
NS_ASSUME_NONNULL_END
